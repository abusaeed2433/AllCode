// https://leetcode.com/problems/count-unreachable-pairs-of-nodes-in-an-undirected-graph

class Solution {
    private Map<Integer,List<Integer>> map = new HashMap<>();
    private boolean[] visited;

    public long countPairs(int n, int[][] connections) {
        int cables = connections.length;
        visited = new boolean[n];

        for(int[] cbl : connections){
            map.computeIfAbsent(cbl[0],k-> new ArrayList<>()).add(cbl[1]);
            map.computeIfAbsent(cbl[1],k-> new ArrayList<>()).add(cbl[0]);
        }
        
        long prev = 0, ans = 0;
        for(int i=0;i<n;i++){
            if(visited[i]) continue;
            
            long val = dfs(i,0);
            if(prev != 0){
                ans += prev * val;
            }
            prev += val;
        }        
        return ans;
    }

    private long dfs(int sIndex,long ans){
        ans++;
        visited[sIndex] = true;        
        for(int pc : map.getOrDefault(sIndex,new ArrayList<>())){
            if(visited[pc]) continue;
            visited[pc] = true;
            ans += dfs(pc,0);
        }
        return ans;
    }

}