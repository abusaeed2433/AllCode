// https://leetcode.com/problems/number-of-operations-to-make-network-connected

class Solution {
    private List<List<Integer>> adj = new ArrayList<>();
    private boolean[] visited;

    public int makeConnected(int n, int[][] connections) {
        int cables = connections.length;
        visited = new boolean[n];

        if(cables < n-1){
            return -1;
        }

        for(int i=0;i<n;i++){
            adj.add(new ArrayList<>());
        }

        for(int[] cbl : connections){
            adj.get(cbl[0]).add(cbl[1]);
            adj.get(cbl[1]).add(cbl[0]);
        }
        
        int comp = 0;
        for(int i=0;i<n;i++){
            if(visited[i]) continue;
            dfs(i);
            // for(boolean b : visited){
            //     System.out.print(b+" ");
            // }
            // System.out.println("");
            comp++;
        }
        return comp-1;
    }

    private void dfs(int sIndex){
        for(int pc : adj.get(sIndex)){
            if(visited[pc]) continue;
            visited[pc] = true;
            dfs(pc);
        }
    }

}