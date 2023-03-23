// https://leetcode.com/problems/pass-the-pillow

class Solution {
    public int passThePillow(int n, int time) {
        int dir = time/(n-1);
        int rem = time%(n-1);
        return dir%2==0 ? rem+1 : n-rem;
    }
}