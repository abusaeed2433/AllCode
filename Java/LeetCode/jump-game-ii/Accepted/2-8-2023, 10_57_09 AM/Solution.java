// https://leetcode.com/problems/jump-game-ii

class Solution {

    public int jump(int[] nums) {
        
        int n = nums.length;

        int[] dp = new int[n];
        for(int i=0; i<n; i++) dp[i] = Integer.MAX_VALUE;
        dp[0] = 0;

        for(int i=0; i<n; i++){
            
            int ind = Math.min( i+nums[i],n-1);

            for(int j=i+1; j<=ind; j++){ // relaxing
                dp[j] = Math.min( dp[j] , dp[i]+1);
            }
            
            if(ind == n-1) return dp[n-1];

        }

        return dp[n-1];

        // 0 1 1 2 2
//        for(int i=0; i<n; i++){

//        }
    
    }

    

}