// https://leetcode.com/problems/count-unreachable-pairs-of-nodes-in-an-undirected-graph

class Solution {
    private List<List<Integer>> adj = new ArrayList<>();
    private boolean[] visited;

    public long countPairs(int n, int[][] connections) {
        int cables = connections.length;
        visited = new boolean[n];

        for(int i=0;i<n;i++){
            adj.add(new ArrayList<>());
        }

        for(int[] cbl : connections){
            adj.get(cbl[0]).add(cbl[1]);
            adj.get(cbl[1]).add(cbl[0]);
        }
        
        List<Long> arr = new ArrayList<>();
        for(int i=0;i<n;i++){
            if(visited[i]) continue;
            arr.add(dfs(i,0));
        }
        long ans = 0;
        long prev = arr.get(0);
        for(int i=1; i<arr.size();i++){
            ans += arr.get(i) * prev;
            prev += arr.get(i);
        }
        return ans;
    }

    private long dfs(int sIndex,long ans){
        ans++;
        visited[sIndex] = true;
        for(int pc : adj.get(sIndex)){
            if(visited[pc]) continue;
            visited[pc] = true;
            ans += dfs(pc,0);
        }
        return ans;
    }

}