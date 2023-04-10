// https://leetcode.com/problems/number-of-closed-islands

class Solution {
    private int[][] grid;
    private boolean[][] visited;
    private int m,n;

    public int closedIsland(int[][] grid) {
        m = grid.length;
        n = grid[0].length;
        this.grid = grid;
        visited = new boolean[m][n];

        int ans = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1) continue;
                if(visited[i][j]) continue;
                ans += bfs(i,j) ? 1 : 0;
            }
        }
        return ans;
    }

    private boolean bfs(int x, int y){
        int[] dirx = {1,0,0,-1};
        int[] diry = {0,1,-1,0};
        Queue<int[]> q = new LinkedList<>();
        q.add(new int[]{x,y});

        boolean isPossible = true;

        while(!q.isEmpty()){
            int[] xy = q.poll();

            for(int i=0; i<4; i++){
                x = xy[0] + dirx[i];
                y = xy[1] + diry[i];
                if(x < 0 || y < 0 || x >=m || y >= n){
                    isPossible = false;
                    continue;
                }
                if(grid[x][y] == 1 || visited[x][y]) continue;

                visited[x][y] = true;
                q.add(new int[]{x,y});
            }
        }
        return isPossible;
    }
}


