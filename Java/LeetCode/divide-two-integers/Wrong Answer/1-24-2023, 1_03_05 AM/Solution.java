// https://leetcode.com/problems/divide-two-integers

class Solution {
    public int divide(int dividend, int divisor) {
        int dd = Math.abs(dividend);
        int dr = Math.abs(divisor);
        int ans = 0, tmp = dr;
        while(dr <= dd){
            ans++;
            dr += tmp;
        }
        
        if( (dividend < 0 && divisor < 0 ) || (divisor >=0 && dividend >=0)){
            return ans;
        }
        return -ans;
    }
}