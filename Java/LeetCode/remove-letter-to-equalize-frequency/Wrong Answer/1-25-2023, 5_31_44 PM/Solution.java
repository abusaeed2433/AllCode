// https://leetcode.com/problems/remove-letter-to-equalize-frequency

class Solution {
    public boolean equalFrequency(String word) {
        int[] freq = new int[26];

        int count = 0;

        for(int i=0; i<word.length(); i++){
            freq[ word.charAt(i) - 97 ]++;
            if( freq[ word.charAt(i) - 97 ] > 1) count++;
            
            if(count > 1) return false;
        }

        return true;
    }
}