// https://leetcode.com/problems/minimum-score-of-a-path-between-two-cities

class Solution {
    private int[][] dist;
    private int n,ans;
    private boolean[] visited;
    public int minScore(int n, int[][] roads) {
        dist = new int[n][n];
        this.n = n-1;
        this.visited = new boolean[n];

        for(int[] road : roads){
            int a = road[0]-1;
            int b = road[1]-1;
            int d = road[2];
            dist[a][b] = d;
            dist[b][a] = d;
        }

        // for(int[] ds : dist){
        //     for(int d : ds){
        //         System.out.print(d+" ");
        //     }
        //     System.out.println("");
        // }

        ans = Integer.MAX_VALUE;
        dfs(0,Integer.MAX_VALUE);
        return ans;
    }

    private void dfs(int sIndex,int d){
        if(sIndex == n){
            ans = Math.min(ans,d);
            visited[sIndex] = false;
            return;
        }
        visited[sIndex] = true;
        for(int i=0;i<=n;i++){
            if(dist[sIndex][i] == 0 || visited[i]) continue;
            d = Math.min(dist[sIndex][i],d);
            dfs(i,d);
        }
        visited[sIndex] = false;
    }

}