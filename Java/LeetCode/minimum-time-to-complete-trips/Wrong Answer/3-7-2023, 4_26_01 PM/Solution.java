// https://leetcode.com/problems/minimum-time-to-complete-trips

class Solution {
    public long minimumTime(int[] time, int tt) {
        Arrays.sort(time);
        long ans = 1;
        while(tt > 0){
            int count = getIndex(time,ans);
            //System.out.println(count);
            tt -= count;
            ans++;
        }
        return ans-1;
    }

    private  int getIndex(int[] arr, long key){
        int l = 0, h = arr.length - 1;
        while(l <= h){
            int mid = (l+h)/2;
            if(arr[mid] <= key){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
        return Math.max(l,0);
    }

}