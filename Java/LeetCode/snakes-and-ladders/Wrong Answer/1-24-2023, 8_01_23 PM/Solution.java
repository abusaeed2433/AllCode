// https://leetcode.com/problems/snakes-and-ladders

class Solution {
    public int snakesAndLadders(int[][] board) {
        int n = board.length;
        int grid = n*n;
        
        Node[] nodes = new Node[grid+1];
        for(int i=0;i<=grid;i++){
            nodes[i] = new Node();
        }
        int ans = 0;
        ArrayList<Integer> arr = new ArrayList<>();
        arr.add(1);

        int i,j, tmp;
        while( !arr.isEmpty() ){
            tmp = arr.get(0);
            i = n-1-(tmp-1)/n;
            j = ((tmp-1)/n)%2 == 0 ? (tmp-1)%n : n-1-(tmp-1)%n;

            if(nodes[grid].visited)
                return nodes[grid].dist;            

            int next = board[i][j];
            if( next != -1 && !nodes[next].visited ){
                arr.add(next);
                nodes[ next ].visited = true;
                nodes[ next ].dist = nodes[tmp].dist;
            }

            for(int k=tmp+1; k<= Math.min(arr.get(0)+6,grid); k++){
                i = n-1-(k-1)/n;
                j = ((k-1)/n)%2 == 0 ? (k-1)%n : n-1-(k-1)%n;

//                System.out.println(tmp);

                if( !nodes[k].visited){
                    arr.add(k);
                    nodes[ k ].visited = true;
                    nodes[k].dist = nodes[arr.get(0)].dist+1;
                }
            }
            arr.remove(0);
        }
        return -1;
    }
}

class Node{
    public boolean visited;
    public int dist = 0;
}


