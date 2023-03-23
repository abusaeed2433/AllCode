// https://leetcode.com/problems/as-far-from-land-as-possible

class Solution {

    private int n,m;
    private int[][] grid;

    public int maxDistance(int[][] grid) {
        
        this.grid = grid;

        int ans = -1;

        n = grid.length;
        m = grid[0].length;

        for(int i=0; i<n; i++){            
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1) continue;
                ans = Math.max(ans, getMinDis(i,j));
            }
        }
        
        return ans;

    }

    private int getMinDis(int ii, int jj){
        
        int dis = Integer.MAX_VALUE;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 0) continue;
                dis = Math.min(
                    dis,
                    Math.abs(i-ii) + Math.abs(j-jj)
                );

            }
        }
        //System.out.println()
        return dis;
    }

}

