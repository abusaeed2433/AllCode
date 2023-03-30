// https://leetcode.com/problems/minimum-path-sum

class Solution {

    private int ans = Integer.MAX_VALUE;
    private int m,n;
    private int[][] grid;
    private int[][] dp;

    public int minPathSum(int[][] grid) {
        this.grid = grid;
        m = grid.length;
        n = grid[0].length;
        dp = new int[m][n];

        calc(0,0,0);
        return ans;
    }

    private void calc(int sm,int i, int j){
        if(i>m-1 || j>n-1){            
            return;
        }

        if(dp[i][j] != 0){
            ans = Math.min(ans,dp[i][j]+sm);
            return;
        }

        if(i==m-1 && j==n-1){
            ans = Math.min(ans,sm+grid[i][j]);
            return;
        }
        
        calc(sm+grid[i][j],i+1,j);
        dp[i][j] = Math.min(ans,dp[i][j]);
        
        calc(sm+grid[i][j],i,j+1);
        dp[i][j] = Math.min(ans,dp[i][j]);
    }

}
