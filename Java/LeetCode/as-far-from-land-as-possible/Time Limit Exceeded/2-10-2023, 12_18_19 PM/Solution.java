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

    private int getMinDis(int i, int j){
                
        Queue<Node> queue = new LinkedList<>();

        queue.add(new Node(i,j,0));
        boolean[][] visited = new boolean[n][n];
        visited[i][j] = true;

        while( !queue.isEmpty() ){
            Node nd = queue.remove();

            i = nd.i-1; j = nd.j;            
            if(i>=0 && !visited[i][j]) {
                if(grid[i][j] == 1) return nd.dist+1;
                visited[i][j] = true;
                queue.add(new Node(i,j,nd.dist+1));
            }


            i = nd.i; j = nd.j-1;
            if(j>=0 && !visited[i][j]) {
                if(grid[i][j] == 1) return nd.dist+1;
                visited[i][j] = true;
                queue.add(new Node(i,j,nd.dist+1));
            }


            i = nd.i+1; j = nd.j;
            if(i<n && !visited[i][j]) {
                if(grid[i][j] == 1) return nd.dist+1;
                visited[i][j] = true;
                queue.add(new Node(i,j,nd.dist+1));
            }

            i = nd.i; j = nd.j+1;
            if(j<n && !visited[i][j]) {
                if(grid[i][j] == 1) return nd.dist+1;
                visited[i][j] = true;
                queue.add(new Node(i,j,nd.dist+1));
            }
            
        }

        return -1;
    }

    class Node{
        public int i,j;
        public int dist = 0;
        public Node(int i, int j, int dist){
            this.i = i;
            this.j = j;
            this.dist = dist;
        }
    }

}

