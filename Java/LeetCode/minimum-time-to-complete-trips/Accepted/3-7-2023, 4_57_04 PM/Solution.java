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
        //System.out.println(h);
        h *= tt;        
        //System.out.println(h);
        // System.out.println(isEnough(1036368));
        // long m = 64773060227L;
        // System.out.println(isEnough(m));
        
        while(l <= h){
            long mid = (l+h)/2;
            //System.out.print(l+"+"+h+" = "+mid);
            if(isEnough(mid)){
                //System.out.println(" true");
                h = mid-1;
            }
            else{
                //System.out.println(" false");
                l = mid+1;
            }
        }

        

        return l;
    }

    private boolean isEnough(long time){
        long count = 0;
        int i=0;
        while(i<n){
            long tmp = time/arr[i];
            if(tmp == 0) break;
            count += tmp;
            i++;
        }

        return count >= tt;

    }

}