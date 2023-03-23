// https://leetcode.com/problems/fibonacci-number

class Solution {
    public int fib(int n) {
        int mx = 30;
        int[] arr = new int[mx+1];
        arr[0] = 0;
        arr[1] = 1;
        for(int i=2;i<=mx;i++){
            arr[i] = arr[i-1]+arr[i-2];
        }

        return arr[n];
    }
}