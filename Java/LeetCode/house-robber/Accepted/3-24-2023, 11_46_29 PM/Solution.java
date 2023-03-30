// https://leetcode.com/problems/house-robber

class Solution {
    public int rob(int[] nums) {
        int n = nums.length;
        if(n==1) return nums[0];

        int[] dp = new int[n+1];
        dp[0] = nums[0];
        dp[1] = Math.max(nums[1],dp[0]);
        for(int i=2;i<n;i++){
            dp[i] = Math.max(nums[i] + dp[i-2],dp[i-1]);
        }
        return Math.max(dp[n-1],dp[n-2]);
    }
}