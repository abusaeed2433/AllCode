// https://leetcode.com/problems/split-the-array-to-make-coprime-products

class Solution {
    public int findValidSplit(int[] nums) {
        int n = nums.length;
        long[] parr = new long[n];
        
        parr[0] = nums[0];
        // 1 2  3  4
        // 1 2  6  24
        
        for(int i=1;i<n;i++){            
            parr[i] = parr[i-1] * nums[i];
        }
        
        for(int i=0;i<n-1;i++){
            if(gcd(parr[i],parr[n-1]/parr[i]) == 1){
                return i+1;
            }
        }
        
        return -1;
        
    }
    static long gcd(long a, long b)
    {
        if (b == 0)
            return a;
        else
            return gcd(b, a % b);
    }
}