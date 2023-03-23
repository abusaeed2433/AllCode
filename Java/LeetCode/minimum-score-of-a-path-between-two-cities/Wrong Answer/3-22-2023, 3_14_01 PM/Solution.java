// https://leetcode.com/problems/minimum-score-of-a-path-between-two-cities

class Solution {
    private ArrayList<ArrayList<Pair>> dist;
    private int n,ans;
    private boolean[] visited;
    public int minScore(int n, int[][] roads) {
        dist = new ArrayList<>();
        for(int i=0;i<n;i++){
            dist.add(new ArrayList<>());
        }
        this.n = n-1;
        this.visited = new boolean[n];

        for(int[] road : roads){
            int a = road[0]-1;
            int b = road[1]-1;
            int d = road[2];
            
            // if(dist.get(a) == null) dist.set(a, new ArrayList<>());
            // if(dist.get(a) == null) dist.set(b, new ArrayList<>());

            dist.get(a).add(new Pair(b,d));
            dist.get(a).add(new Pair(a,d));
        }

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
        
        if(dist.get(sIndex) == null) return;

        visited[sIndex] = true;        
        for(Pair p : dist.get(sIndex)){
            if(visited[p.v]) continue;
            d = Math.min(p.d,d);
            dfs(p.v,d);
        }
        visited[sIndex] = false;
    }

    static class Pair{
        public int v,d;
        public Pair(int v, int d){
            this.v = v;
            this.d = d;
        }
    }

}