// https://leetcode.com/problems/remove-letter-to-equalize-frequency

class Solution {
    public boolean equalFrequency(String word) {
        int[] freq = new int[26];

        int count = 0;

        for(int i=0; i<word.length(); i++){
            freq[ word.charAt(i) - 97 ]++;
            if( freq[ word.charAt(i) - 97 ] > 1) count++;
        }

        Arrays.sort(freq);

        int ind = 0;

        while(freq[ind] == 0) ind++;

        if(ind == 25) return true; // sigle char
        if(ind == 24) return (freq[25] - freq[24]) == 1;

        if(freq[ind] == 1) return true;

        return (freq[25] - freq[ind]) == 1 && freq[25] != freq[24]; 

    }
}