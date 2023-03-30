// https://leetcode.com/problems/reorder-routes-to-make-all-paths-lead-to-the-city-zero

class Solution {
    private Map<Integer,List<Integer>> map = new HashMap<>();
    private int ans = 0;
    private boolean[] visited;

    public int minReorder(int n, int[][] connections) {
        visited = new boolean[n];
        for(int[] conn : connections){
            map.computeIfAbsent(conn[0],v->{
                return new ArrayList<>();
            }).add(conn[1]);

            map.computeIfAbsent(conn[1],v->{
                return new ArrayList<>();
            }).add(-conn[0]);

        }

        dfs(0);
        return ans;
    }
    
    private void dfs(int sIndex){
        visited[sIndex] = true;
        List<Integer> adj = map.get(sIndex);
        for(int node : adj){
            if(visited[Math.abs(node)]) continue;
            if(node >= 0){
                //System.out.println(sIndex +" "+node);
                ans++;
            }
            else{
                node *= -1;
            }
            dfs(node);
        }
    }
}