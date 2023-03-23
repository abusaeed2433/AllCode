// https://leetcode.com/problems/divide-two-integers

class Solution {
    public int divide(int dividend, int divisor) {
        long dd = dividend > 0 ? dividend : 0-dividend;
        long dr = divisor > 0 ? divisor : 0-divisor;
        long ans = 0, tmp = dr;

        while(dr < dd){
            ans++;
            dr += tmp;
        }
        
        if( (dividend < 0 && divisor < 0 ) || (divisor >=0 && dividend >=0)){
            return (int) ans;
        }
        return (int)(0-ans);
    }
}