// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
    public int maxProfit(int[] prices) {

        int n = prices.length;
        int[] dp = new int[n];
        
        dp[0] = prices[0];

        for(int i=1; i<n; i++)
            dp[i] = Math.min(dp[i-1],prices[i]);
        
        int ans = 0;

        for(int i = 1; i<n; i++){
            ans = Math.max(ans, prices[i]-dp[i]);
        }


        return ans;
        
    }
}