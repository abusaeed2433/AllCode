// https://leetcode.com/problems/jump-game

class Solution {
    public boolean canJump(int[] nums) {
        int n = nums.length;

        int[] dp = new int[n];
        for(int i=0; i<n; i++) dp[i] = Integer.MAX_VALUE;
        dp[0] = 0;

        for(int i=0; i<n; i++){

            if(dp[i] == Integer.MAX_VALUE) continue;
            
            int ind = Math.min( i+nums[i],n-1);

            for(int j=i+1; j<=ind; j++){ // relaxing
                dp[j] = Math.min( dp[j] , dp[i]+1);
            }
            

        }

        return dp[n-1] != Integer.MAX_VALUE;
    }
}