// https://leetcode.com/problems/majority-element

class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);

        int size = nums.length / 2;

        int i=0;
        while(i+size < nums.length){
            if(nums[i] == nums[i+size]) return nums[i];
            i++;
        }

        return nums[nums.length-1];
    }
}