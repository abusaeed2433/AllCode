// https://leetcode.com/problems/minimum-score-of-a-path-between-two-cities

class Solution {    
    public int minScore(int n, int[][] roads) {
        
        int ans = Integer.MAX_VALUE;

        for(int[] road:roads){
            ans = Math.min(road[2],ans);
        }

        return ans;
    }
}