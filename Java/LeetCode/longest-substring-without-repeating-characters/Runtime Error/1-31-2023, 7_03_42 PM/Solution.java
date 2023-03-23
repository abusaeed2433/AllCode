// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
    
    int[] map = new int[26];

    public int lengthOfLongestSubstring(String s) {
        int ans = 0, prev = 0;
        resetMap();

        for(int i=0;i<s.length();i++){
            if(map[s.charAt(i)-97] != -1){

                ans = Math.max(ans, i-prev);

                int tmp = map[ s.charAt(i)-97 ] + 1;
                prev = tmp;
                
                resetMap();
                while(tmp <= i){
                    map[ s.charAt(tmp)-97 ] = tmp;
                    tmp++;
                }
            }
            else{
                map[ s.charAt(i)-97 ] = i;            
            }
        }

        return ans;
    }

    private void resetMap(){
        for(int i=0;i<26;i++) map[i] = -1;
    }

}
