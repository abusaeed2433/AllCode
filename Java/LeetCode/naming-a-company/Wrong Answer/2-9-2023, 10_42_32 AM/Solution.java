// https://leetcode.com/problems/naming-a-company

class Solution {

    private HashMap<String, Node> map = new HashMap<>();
    private int[] charMap = new int[26];

    public long distinctNames(String[] ideas) {
        int n = ideas.length;

        long total = n*(n-1);

        for(String s : ideas){
            charMap[ s.charAt(0)-97 ]++;

            String sub = s.substring(1);
            map.put(sub,map.getOrDefault(sub,new Node()).incAndAdd(s.charAt(0)));
        }



        for( Map.Entry<String, Node> entry : map.entrySet() ){
            long count = entry.getValue().count;
            System.out.println(entry.getKey()+" "+entry.getValue().count);
            if(count > 1){
                
                ArrayList<Character> arr = entry.getValue().arr;
                Collections.sort(arr);

                count = 0;
                Character ch = arr.get(0);
                for(int i=1; i<arr.size(); i++){
                    count += charMap[arr.get(i)-97];
                    charMap[arr.get(i)-97]=0;
                }
                charMap[ch-97] += count;

            }
        }

        for(int i=0; i<26; i++){
            total -= (charMap[i] * (charMap[i]-1));
        }

        return total;
        


    }
}

class Node{
    public int count = 0;
    public ArrayList<Character> arr = new ArrayList<>();
    public Node incAndAdd(Character c){
        arr.add(c);
        count++;
        return this;
    }
}