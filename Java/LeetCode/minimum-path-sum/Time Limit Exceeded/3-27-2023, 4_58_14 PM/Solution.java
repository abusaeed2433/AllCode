// https://leetcode.com/problems/minimum-path-sum

class Solution {

    private int ans = Integer.MAX_VALUE;
    private int m,n;
    private int[][] grid;

    public int minPathSum(int[][] grid) {
        this.grid = grid;
        m = grid.length;
        n = grid[0].length;

        calc(0,0,0);
        return ans;
    }

    private void calc(int sm,int i, int j){
        if(i>m-1 || j>n-1){            
            return;
        }

        if(i==m-1 && j==n-1){
            ans = Math.min(ans,sm+grid[i][j]);
            return;
        }
        
        calc(sm+grid[i][j],i+1,j);
        calc(sm+grid[i][j],i,j+1);        
    }

}
