// https://leetcode.com/problems/minimize-maximum-of-array

class Solution {
    public int minimizeArrayValue(int[] nums) {
        int ans = 0;
        long pr = 0;
        for(int i=0; i<nums.length; i++){
            pr += nums[i];
            ans =(int) Math.max(ans,Math.ceil(pr/(double)(i+1)));
        }
        return ans;
    }
}