// https://leetcode.com/problems/snakes-and-ladders

class Solution {
    public int snakesAndLadders(int[][] board) {
        int n = board.length;
        int grid = n*n;
        
        boolean[] visited = new boolean[grid];
        int ans = 0;
        ArrayList<Integer> arr = new ArrayList<>();
        arr.add(0);

        int i,j, tmp;
        while( !arr.isEmpty() ){
            tmp = arr.get(0);
            i = tmp/n;
            j = tmp%n;

            int next = board[i][j];
            if( next != -1){
                if(visited[next-1] ){
                    if(next == grid)
                        return ans;
                }
                else{
                    arr.add(next-1);
                    visited[ next-1 ] = true;
                }
            }

            for(int k=tmp; k<= Math.min(arr.get(0)+6,grid-1); k++){
                tmp = k;
                i = tmp/n;
                j = tmp%n;

                System.out.println(tmp);

                if( !visited[tmp] ){
                    arr.add(tmp);
                    visited[ tmp ] = true;
                    
                }
                else{
                    if(tmp == grid-1)
                        return ans;
                }
            }
            arr.remove(0);
            ans++;
        }
        return -1;
    }

    
}