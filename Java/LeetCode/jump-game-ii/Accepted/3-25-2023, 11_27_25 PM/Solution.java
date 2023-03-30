// https://leetcode.com/problems/jump-game-ii

class Solution {

    public int jump(int[] nums) {
        
        int n = nums.length;

        int[] dp = new int[n];
        for(int i=0; i<n; i++){
            int num = nums[i];
            for(int j=1;j<=num && i+j<n;j++){
                if(dp[i+j] == 0) dp[i+j] = dp[i]+1;
                else dp[i+j] = Math.min(dp[i+j],dp[i]+1);
                if(i+j == n-1) return dp[n-1];
            }                        
            System.out.println("");
        }
        return dp[n-1];
    }

    

}