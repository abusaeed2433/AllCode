// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
    public int maxProfit(int[] prices) {

        int n = prices.length;
        
        
        int mn = prices[0];
        int ans = 0;

        for(int i=1; i<n; i++){
            mn = Math.min(mn,prices[i]);
            ans = Math.max(ans,prices[i]-mn);
        }            

        return ans;        
    }
}