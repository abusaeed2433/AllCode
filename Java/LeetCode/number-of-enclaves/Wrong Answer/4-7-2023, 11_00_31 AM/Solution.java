// https://leetcode.com/problems/number-of-enclaves

class Solution {
    private int[][] grid;
    private boolean[][] visited;
    private int m,n;

    public int numEnclaves(int[][] grid) {
        m = grid.length;
        n = grid[0].length;
        this.grid = grid;
        visited = new boolean[m][n];

        int one = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1) one++;
            }
        }

        //System.out.println(one);

        int ans = 0;
        for(int i=0; i<n; i++){
            if(grid[0][i] == 1 && !visited[0][i]){
                one -= bfs(0,i);
            }

            if(grid[m-1][i] == 1 && !visited[m-1][i]){
                one -= bfs(m-1,i);
            }
            //System.out.println(count);
        }

        for(int i=0; i<m; i++){
            if(grid[i][0] == 1 && !visited[i][0]){
                one -= bfs(i,0);
            }

            if(grid[n-1][m-1] == 1 && !visited[n-1][m-1]){
                one -= bfs(n-1,m-1);
            }
        }
        return one;
    }

    private int bfs(int i, int j){

        int count = 1;
        Queue<int[]> q = new LinkedList<>();
        q.add(new int[]{i,j});
        int[] dirx = {1,0,-1,0};
        int[] diry = {0,1,0,-1};
        visited[i][j] = true;

        while(!q.isEmpty()){
            int[] xy = q.poll();
            
            for(int k=0; k<4; k++){
                i = xy[0] + dirx[k];
                j = xy[1] + diry[k];
                if(i<0 || j<0 || i>=m || j >= n) continue;
                if(grid[i][j] == 0 || visited[i][j]) continue;
                visited[i][j] = true;
                q.add(new int[]{i,j});
                count++;
            }
        }
        return count;

    }

}


