// https://leetcode.com/problems/maximum-subarray

class Solution {
    public int maxSubArray(int[] nums) {
        
        int ans = Integer.MIN_VALUE, mx = 0;

        for(int i=0; i < nums.length; i++){
            mx += nums[i];    
            ans = Math.max(ans,mx);            

            if(mx <= 0) mx = 0;
        }

        return ans;

    }
}