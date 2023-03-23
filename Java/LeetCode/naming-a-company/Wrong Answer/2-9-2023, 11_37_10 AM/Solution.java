// https://leetcode.com/problems/naming-a-company

class Solution {

    private ArrayList<String>[] groups = new ArrayList[26];

    public long distinctNames(String[] ideas) {
        int n = ideas.length;

        for(int i=0; i<26; i++) groups[i] = new ArrayList<>();

        long total = 0;//n*(n-1);

        for(String s : ideas){
            groups[ s.charAt(0)-97 ].add( s.substring(1) );
        }

        for(int i=0; i<26; i++){

            System.out.print(groups[i].size()+" ");

            for(int j=i+1; j<26; j++){
                long common = findCommon(groups[i],groups[j]);

                common = common * common;

                int n1 = groups[i].size(),
                    n2 = groups[j].size();
                total += (n1*n2) - common;

            }

        }

        

        
        return total;

    }

    private int findCommon( ArrayList<String> list1, 
                            final ArrayList<String> list2 ){
        list1.retainAll(list2);
        return list1.size();        
    }

}
