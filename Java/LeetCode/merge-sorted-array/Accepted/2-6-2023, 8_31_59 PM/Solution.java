// https://leetcode.com/problems/merge-sorted-array

class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {

        for(int i=0; i<n; i++){
            
            nums1[m+i] = nums2[i];

            for(int j=m+i; j>0; j--){
                if(nums1[j] < nums1[j-1]){
                    int tmp = nums1[j-1];
                    nums1[j-1] = nums1[j];
                    nums1[j] = tmp;
                }
            }
        }

    }
}