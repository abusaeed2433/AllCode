// https://leetcode.com/problems/search-insert-position

class Solution {
    public int searchInsert(int[] nums, int target) {
        int l = 0, h = nums.length-1;
        if(target >= nums[h]) return h+1;

        while(l<h){
            int mid = (l+h)/2;
            if(nums[mid] == target) return mid;

            if(nums[mid] < target) l = mid+1;
            else h = mid-1;
        }
        if(nums[l] > target) return l;
        return l+1;

    }
}