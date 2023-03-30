// https://leetcode.com/problems/house-robber

class Solution {
    public int rob(int[] nums) {
        int n = nums.length;
        if(n==1) return nums[0];

        int[] dp = new int[n+1];
        dp[0] = nums[0];
        dp[1] = nums[1];
        for(int i=2;i<n;i++){
            dp[i] = nums[i] + dp[i-2];
        }
        return Math.max(dp[n-1],dp[n-2]);
    }
}