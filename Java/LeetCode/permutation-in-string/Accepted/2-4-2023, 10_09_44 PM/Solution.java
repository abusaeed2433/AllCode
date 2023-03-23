// https://leetcode.com/problems/permutation-in-string

class Solution {


    private int[] map = new int[26];
    private int[] map2 = new int[26];


    public boolean checkInclusion(String s1, String s2) {

        int n1 = s1.length(), n2 = s2.length();

        if( n1 > n2) return false;

        for(int i=0; i<26; i++) map[i] = map2[i] = 0;

        for(int i=0; i<n1; i++) {
            map[s1.charAt(i)-97]++;
            map2[s2.charAt(i)-97]++;
        }        

        int i = 0 ;
        do{
            if(doesMatch()) return true;
            map2[s2.charAt(i)-97]--;
            if(i + n1 < n2)
                map2[s2.charAt(i+n1)-97]++;
            i++;
        }
        while(i < n2 - (n1-1));

        return false;
        
    }    

    private boolean doesMatch(){

        for(int i=0; i< 26; i++){
            if(map[i] != map2[i]) return false;
        }
        return true;
    }
    
}