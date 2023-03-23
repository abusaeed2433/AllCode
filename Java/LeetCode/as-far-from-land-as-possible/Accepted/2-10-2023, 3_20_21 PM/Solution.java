// https://leetcode.com/problems/as-far-from-land-as-possible

class Solution {

    private int n;
    private boolean[][] visited;
    public int maxDistance(int[][] grid) {
        
        n = grid.length;

        Queue<Pair> queue = new LinkedList<>();

        visited = new boolean[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                visited[i][j] = (grid[i][j] == 1);

                if( grid[i][j] == 1){
                    queue.add( new Pair(i,j) );
                }
            }
        }

        int dist = -1;
        while( !queue.isEmpty() ){

            int size = queue.size();

            while( size-- > 0){

                Pair pair = queue.poll();

                for(int i=0;i<4;i++){
                    Pair p = pair.getNew(i);
                    if(p.test()){
                        queue.add(p);
                    }
                }

            }
            dist++;
        }

        return (dist == 0) ? -1 : dist;

    }

    class Pair{
        public static int[][] dir = new int[][]{{-1,0},{0,1},{1,0},{0,-1}};
        public int i, j;

        public Pair(int i, int j){
            this.i = i;
            this.j = j;
        }

        public Pair getNew(int i){
            Pair p =  new Pair(this.i+dir[i][0], this.j+dir[i][1]);
            return p;
        }

        public boolean test(){            
            boolean tmp = i>=0 && j>=0 && i<n && j<n && !visited[i][j];

            if(tmp){
                visited[i][j] = true;
            }
            return tmp;
        }

    }

}

