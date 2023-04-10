// https://leetcode.com/problems/optimal-partition-of-string

class Solution {

    int[] map = new int[26];

    public int partitionString(String s) {
        int ans = 1;
        resetMap();

        for(int i=0;i<s.length();i++){
            if(map[s.charAt(i)-97] != -1){        
                ans++;
                resetMap();
            }
            map[ s.charAt(i)-97 ] = i;            
        }

        return ans;
    }

    private void resetMap(){
            for(int i=0;i<26;i++) map[i] = -1;
    }
}