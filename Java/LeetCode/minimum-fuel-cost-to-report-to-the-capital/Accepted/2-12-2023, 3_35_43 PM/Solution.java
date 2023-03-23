// https://leetcode.com/problems/minimum-fuel-cost-to-report-to-the-capital

class Solution {
    private long ans = 0, seats;
    private List<Integer>[] adj;
    public long minimumFuelCost(int[][] roads, int seats) {
        this.seats = seats;
        int n = roads.length + 1;

        adj = new ArrayList[n];

        for(int[] road : roads){
            if( adj[ road[0] ] == null) adj[ road[0] ] = new ArrayList<>();
            if( adj[ road[1] ] == null) adj[ road[1] ] = new ArrayList<>();

            adj[ road[0] ].add(road[1]);
            adj[ road[1] ].add(road[0]);
        }


        dfs(0,-1);
        return ans;
    }

    private long dfs(int node, int par){
        
        int count = 1;

        if(adj[node] == null || adj[node].isEmpty()) return 1;

        for(int child : adj[node]){
            if( child != par){
                count += dfs(child,node);
            }
        }

        if(node != 0){
            ans += Math.ceil((double)count/seats);
        }

        return count;

    }

}