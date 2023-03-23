// https://leetcode.com/problems/naming-a-company

class Solution {

    private ArrayList<String>[] groups = new ArrayList[26];
    private HashMap<String, Integer> map = new HashMap<>();

    public long distinctNames(String[] ideas) {
        int n = ideas.length;

        for(int i=0; i<26; i++) groups[i] = new ArrayList<>();

        long total = 0;

        for(String s : ideas){
            String sub = s.substring(1);
            //groups[ s.charAt(0)-97 ].add( sub );
            map.put(sub, map.getOrDefault(sub,0)+1);
            if( map.get(sub) == 1){
                groups[ s.charAt(0)-97 ].add(sub);
            }
        }

        for(int i=0; i<26; i++){

            if(groups[i].isEmpty()) continue;
            long n1 = groups[i].size();

            for(int j=i+1; j<26; j++){
                

                if(groups[j].isEmpty()) continue;
                long n2 = groups[j].size();

                long common = findCommon(groups[i],groups[j]);                
                total += 2* (n1 - common) * (n2 - common);

            }

        }
            
        return total;

    }

    private long findCommon( final ArrayList<String> list1, 
                            final ArrayList<String> list2 ){
        ArrayList<String> tmp = new ArrayList<>(list1);
        tmp.retainAll(list2);
        long count = 0;
        for(String s : tmp){
            count += map.getOrDefault(s,0);
        }
        return count; 
    }

}
