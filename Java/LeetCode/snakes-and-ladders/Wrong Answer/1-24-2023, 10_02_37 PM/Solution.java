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
        nodes[1].dist = 0;

        int i,j, tmp;
        while( !arr.isEmpty() ){
            tmp = arr.get(0);
            i = n-1-(tmp-1)/n;
            j = ((tmp-1)/n)%2 == 0 ? (tmp-1)%n : n-1-(tmp-1)%n;

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
                    //System.out.println(k+" - "+nodes[k].dist);
                    
                    arr.add(k);
                    nodes[k].dist = Math.min(
                            nodes[arr.get(0)].dist+1,
                            nodes[k].dist
                        );
                }
            }
            
            nodes[ arr.get(0) ].visited = true;

            arr.remove(0);

            for(i=1;i<=grid;i++){
                System.out.print(nodes[i].dist+" ");
            }
            System.out.println("");
            
        }
 
        
        //System.out.println("");
        if(nodes[grid].dist == Integer.MAX_VALUE)
            return -1;        
        return nodes[grid].dist;
    }
}

class Node{
    public boolean visited;
    public int dist = Integer.MAX_VALUE;
}


