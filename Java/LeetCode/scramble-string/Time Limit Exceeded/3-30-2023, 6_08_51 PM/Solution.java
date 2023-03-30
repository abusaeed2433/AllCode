// https://leetcode.com/problems/scramble-string

class Solution {    
    public boolean isScramble(String s1, String s2) {
        
        int n1 = s1.length();
        int n2 = s2.length();
        if(n1 != n2) return false;
        if(s1.equals(s2)) return true;
        int[] map = new int[26];
        
        for(int i=0; i<n1; i++){
            map[s1.charAt(i)-'a']++;
            map[s2.charAt(i)-'a']--;
        }

        for(int i=0;i<26;i++){
            if(map[i] != 0) return false;
        }

        for(int i=1; i<n1;i++){
            if(
                (isScramble(s1.substring(0,i),s2.substring(0,i)) &&
                 isScramble(s1.substring(i),s2.substring(i)) ) ||

                (isScramble(s1.substring(0,i),s2.substring(n1-i)) &&
                 isScramble(s1.substring(i),s2.substring(0,n1-i)))
            ){
                return true;
            }
        }

        return false;

    }
}