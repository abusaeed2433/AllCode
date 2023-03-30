// https://leetcode.com/problems/reducing-dishes

class Solution {
    private int ans = 0;
    private int[] sat;
    private int n;
    private int[][] dp;

    public int maxSatisfaction(int[] satisfaction) {
        this.sat = satisfaction;
        this.n = sat.length;
        dp = new int[n][n];
        for(int[] arr : dp){
            Arrays.fill(arr,-1);
        }
        
        Arrays.sort(this.sat);
        return calc(0,1);        
    }
    private int calc(int i,int rl){
        if(i>=n){
            return 0;
        }

        if(dp[i][rl-1] != -1){
            return dp[i][rl-1];
        }
        
        return dp[i][rl-1] = Math.max(
            sat[i] * rl + calc(i+1,rl+1),
            calc(i+1,rl)
        );
        
    }
}