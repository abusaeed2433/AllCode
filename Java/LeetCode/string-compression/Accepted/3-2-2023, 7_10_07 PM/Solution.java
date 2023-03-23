// https://leetcode.com/problems/string-compression

class Solution {
    public int compress(char[] chars) {
        ArrayList<Character> list = new ArrayList<>();
        list.add(chars[0]);
        char prev = chars[0];
        int n = chars.length;

        int count = 1;
        for(int i=1; i<n; i++){
            if(chars[i]==prev){
                count++;
            }
            else{
                if(count > 1){
                    String s = String.valueOf(count);
                    for(int j=0; j<s.length();j++)
                        list.add(s.charAt(j));                
                }
                list.add(chars[i]);
                count = 1;
            }
            prev = chars[i];
        }
        if(count > 1){
        String s = String.valueOf(count);
        for(int j=0; j<s.length();j++){
            list.add(s.charAt(j));
        }
        }
        //System.out.println(Arrays.asList(list));
        //chars = new char[list.size()];
        for(int i=0; i<list.size();i++){
            chars[i] = list.get(i);
            //System.out.print(chars[i]+" ");
        }
        return list.size();

    }
}