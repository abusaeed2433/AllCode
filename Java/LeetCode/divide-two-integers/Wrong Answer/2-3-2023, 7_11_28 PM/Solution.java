// https://leetcode.com/problems/divide-two-integers

class Solution {
    public int divide(int dividend, int divisor) {
        long dd = dividend, dr = divisor;
        dd = dd > 0 ? dd : 0-dd;
        dr = dr > 0 ? dr : 0-dr;
        long ans = 0, tmp = dr;

        while(dr <= dd){
            ans++;
            dr += tmp;
        }
        
        if( (dividend < 0 && divisor < 0 ) || (divisor >=0 && dividend >=0)){
            return (int) ans;
        }
        return (int)(0-ans);
    }
}