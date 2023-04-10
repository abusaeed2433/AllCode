// https://leetcode.com/problems/minimize-maximum-of-array

class Solution {
    public int minimizeArrayValue(int[] nums) {
        int ans = nums[0];
        for(int i=1; i<nums.length; i++){
            long sm = nums[i] + nums[i-1];
            ans =(int) Math.max(ans,Math.ceil(sm/2f));
        }
        return ans;
    }
}