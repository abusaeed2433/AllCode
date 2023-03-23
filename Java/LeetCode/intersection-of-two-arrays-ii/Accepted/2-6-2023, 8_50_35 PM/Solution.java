// https://leetcode.com/problems/intersection-of-two-arrays-ii

class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        Arrays.sort(nums1);
        Arrays.sort(nums2);

        ArrayList<Integer> ans = new ArrayList<Integer>();

        for(int i=0, j=0; i < nums1.length && j<nums2.length; ){
            if(nums1[i] == nums2[j]){
                ans.add(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] > nums2[j]){
                j++;
            }
            else{
                i++;
            }
        }

        int[] arr = new int[ans.size()];
        for(int i=0; i<ans.size();i++)
            arr[i] = ans.get(i);
        
        return arr;
    }

}