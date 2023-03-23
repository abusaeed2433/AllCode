// https://leetcode.com/problems/min-cost-climbing-stairs

class Solution {
    public int minCostClimbingStairs(int[] cost) {
        int n = cost.length;
        int[] arr = new int[n+2];
        arr[0] = 0;
        arr[1] = cost[0];
        arr[2] = cost[1];
        for(int i=3; i<n+2; i++){
            int inc = i>n ? 0 : cost[i-1];
            arr[i] = Math.min(arr[i-1],arr[i-2]) + inc;
        }
        return arr[n+1];
    }
}