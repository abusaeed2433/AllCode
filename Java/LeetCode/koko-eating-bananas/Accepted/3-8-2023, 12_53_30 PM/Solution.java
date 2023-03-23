// https://leetcode.com/problems/koko-eating-bananas

class Solution {
    private int[] piles;
    private int n;
    private int hh;
    public int minEatingSpeed(int[] piles, int hh) {
        this.piles = piles;
        this.n = piles.length;
        this.hh = hh;

        Arrays.sort(piles);
        int l = 1, h = 0;
        for(int bn : piles){
            h = Math.max(h,bn);
        }
    
        
        while(l <= h){
            int mid = (l+h)/2;
            // System.out.print(l +" "+h+" "+mid+" ");
            if(isPossible(mid)){
                h = mid-1;
                // System.out.println("true");
            }
            else{
                l = mid+1;
                // System.out.println("false");
            }
        }

        return l;        
    }

    private boolean isPossible(int k){
        long tm = 0;
        for(int i=n-1; i>=0; i--){
            int tmp = piles[i] / k + (piles[i]%k == 0 ? 0 : 1);
            tm += tmp;
            if(tmp <= 1){
                tm += i;
                break;
            }

        }
        return tm <= hh;
    }
}