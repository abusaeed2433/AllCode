// https://leetcode.com/problems/majority-element

class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);

        int mid = nums.length / 2;
        if(nums[0] == nums[mid]) return nums[0];
        else return nums[nums.length-1];
    }
}