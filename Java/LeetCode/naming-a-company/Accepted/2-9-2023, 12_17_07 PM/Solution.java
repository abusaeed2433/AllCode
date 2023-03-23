// https://leetcode.com/problems/naming-a-company

class Solution {

    private HashSet<String>[] groups = new HashSet[26];

    public long distinctNames(String[] ideas) {
        
        int n = ideas.length;

        for(int i=0; i<26; i++) groups[i] = new HashSet<>();

        long total = 0;
        for(String s : ideas)
            groups[ s.charAt(0)-97 ].add( s.substring(1) );

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

    private int findCommon( final HashSet<String> list1, 
                            final HashSet<String> list2 ){
        int com = 0;

        for(String s : list1){
            if(list2.contains(s)) com++;
        }
        return com;

    }

}
