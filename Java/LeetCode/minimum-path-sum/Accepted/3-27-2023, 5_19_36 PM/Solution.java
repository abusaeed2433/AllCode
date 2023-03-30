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

        dp[0][0] = grid[0][0];

        for(int r=1; r<m; r++){
            dp[r][0] = dp[r-1][0] + grid[r][0];
        }

        for(int c=1; c<n; c++){
            dp[0][c] = dp[0][c-1] + grid[0][c];
        }


        // for(int[] arr : dp){
        //     for(int d : arr){
        //         System.out.print(d+" ");
        //     }
        //     System.out.println("");
        // }
        
        for(int r=1; r<m; r++){
            for(int c=1; c<n; c++){
                dp[r][c] = Math.min(dp[r-1][c],dp[r][c-1]) + grid[r][c];
            }
        }

        return dp[m-1][n-1];
    }


}
