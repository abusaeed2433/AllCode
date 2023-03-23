// https://leetcode.com/problems/single-element-in-a-sorted-array

class Solution {
    public int singleNonDuplicate(int[] nums) {
        int ans = 0;
        for(int num : nums){
            ans ^= num;
        }
        return ans;
    }
}