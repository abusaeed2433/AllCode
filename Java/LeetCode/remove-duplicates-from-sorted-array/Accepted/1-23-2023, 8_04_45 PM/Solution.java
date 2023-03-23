// https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution {
    public int removeDuplicates(int[] nums) {
        
        int lp = 1, fp = 0;
        while(lp < nums.length){
            if(nums[fp] < nums[lp]){
                fp++;
                if(fp != lp)
                    nums[fp] = nums[lp];
            }
            lp++;
        }

        return fp+1;

    }
}