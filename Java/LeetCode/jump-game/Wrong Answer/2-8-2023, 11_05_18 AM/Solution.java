// https://leetcode.com/problems/jump-game

class Solution {
    public boolean canJump(int[] nums) {
        
        int n = nums.length;

        int last = 0;

        for(int i=0; i<n; i++){
            last = Math.max(last, i+nums[i]);
        }

        return last >= n-1;
        
    }
}