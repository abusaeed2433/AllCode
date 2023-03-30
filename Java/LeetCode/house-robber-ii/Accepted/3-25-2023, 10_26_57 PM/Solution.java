// https://leetcode.com/problems/house-robber-ii

class Solution {
    private int[] nums;
    private int n;
    public int rob(int[] nums) {
        this.nums = nums;
        this.n = nums.length;
        if(n==1) return nums[0];
        int ans1 = nums[0] + getSol(2,n-2);
        int ans2 = getSol(1,n-1);
        return Math.max(ans1,ans2);
    }

    private int getSol(int si, int ei){
        if(si > ei) return 0;

        int n = ei-si+1;
        int[] dp = new int[n];
        dp[0] = nums[si];
        if(si+1 > ei) return dp[0];

        dp[1] = Math.max(nums[si],nums[si+1]);
        for(int i=si+2;i<=ei;i++){
            dp[i-si] = Math.max(nums[i] + dp[i-si-2],dp[i-si-1]);
        }
        return Math.max(dp[n-1],dp[n-2]);
    }
}