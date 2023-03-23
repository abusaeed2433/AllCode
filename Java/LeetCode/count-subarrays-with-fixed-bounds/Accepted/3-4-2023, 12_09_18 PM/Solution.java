// https://leetcode.com/problems/count-subarrays-with-fixed-bounds

class Solution {
    public long countSubarrays(int[] arr, int minK, int maxK) {
        int n = arr.length;
        
        long ans = 0;
        int mnp = -1, mxp = -1, inp = -1;

        for(int i=0; i<n; i++){
            if(arr[i] == minK){
                mnp = i;
            }
            if(arr[i] == maxK){
                mxp = i;
            }
            if(arr[i] < minK || arr[i]>maxK){
                inp = i;
            }
            ans += Math.max(0, Math.min(mnp,mxp)-inp);
        }
        return ans;
    }    
}