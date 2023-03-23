// https://leetcode.com/problems/ransom-note

class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        
        int[] map1 = new int[26];
        int[] map2 = new int[26];

        int n1 = ransomNote.length(),
            n2 = magazine.length();

        for(int i=0, j=0; i<n1 || j<n2;i++,j++){
            if(i<n1){
                map1[ ransomNote.charAt(i)-97]++;
            }
            if(j<n2){
                map2[ magazine.charAt(j)-97 ]++;
            }
        }

        for(int i=0;i<26;i++){
            if(map2[i] < map1[i]) return false;
        }
        return true;


    }
}