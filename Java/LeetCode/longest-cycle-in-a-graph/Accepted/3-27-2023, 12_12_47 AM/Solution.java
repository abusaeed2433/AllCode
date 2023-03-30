// https://leetcode.com/problems/longest-cycle-in-a-graph

//can't do right now
class Solution {
    private int ans = -1;
    private Map<Integer,Integer> map;
    private boolean[] visited;
    private int[] edges;
    private int n;

    public int longestCycle(int[] edges) {
        n = edges.length;
        this.edges = edges;
        visited = new boolean[n];

        for (int i = 0; i < n; i++) {
            if(visited[i]) continue;

            map = new HashMap<>();
            map.put(i,1);
            dfs(i);
        }

        return ans;
    }

    private void dfs(int sIndex){
        visited[sIndex] = true;
        
        int ind = edges[sIndex];
        if(ind == -1) return;

        if(visited[ind]){
            if(map.get(ind) == null) return;
            ans = Math.max(ans,map.get(sIndex)+1-map.get(ind));
            return;
        }
        map.put(ind, map.get(sIndex)+1);
        dfs(ind);
    }

}