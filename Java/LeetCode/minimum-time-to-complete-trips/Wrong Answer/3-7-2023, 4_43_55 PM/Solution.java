// https://leetcode.com/problems/minimum-time-to-complete-trips

class Solution {
    private int[] arr;
    private int tt,n;
    public long minimumTime(int[] time, int tt) {
        this.arr = time;
        this.tt = tt;
        n = time.length;

        Arrays.sort(time);
        long l = 1, h = 0;
        for(int n : time){
            h = Math.max(h,n);
        }
        h *= tt;
        
        
        while(l <= h){

            long mid = (l+h)/2;
            if(isEnough(mid)){
                h = mid-1;
            }
            else{
                l = mid+1;
            }

        }

        return l;
    }

    private boolean isEnough(long time){
        int count = 0, i=0;
        while(i<n){
            long tmp = time/arr[i];
            if(tmp == 0) break;
            count += tmp;
            i++;
        }

        return count >= tt;

    }

}