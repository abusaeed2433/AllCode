// https://leetcode.com/problems/minimum-score-of-a-path-between-two-cities

class Solution {
    private ArrayList<ArrayList<Pair>> dist;
    private boolean[] visited;
    public int minScore(int n, int[][] roads) {
        dist = new ArrayList<>();
        for(int i=0;i<n;i++){
            dist.add(new ArrayList<>());
        }
        this.visited = new boolean[n];

        for(int[] road : roads){
            int a = road[0]-1;
            int b = road[1]-1;
            int d = road[2];
            
            dist.get(a).add(new Pair(b,d));
            dist.get(b).add(new Pair(a,d));
        }

        return bfs(0);
    }

    private int bfs(int sIndex){
        
        int ans = Integer.MAX_VALUE;

        Queue<Pair> q = new LinkedList<>();
        q.add(new Pair(0,Integer.MAX_VALUE));

        while(!q.isEmpty()){
            int size = q.size();

            while(size-- > 0){
                Pair tmp = q.poll();
                
                if(visited[tmp.v])continue;

                for(Pair p : dist.get(tmp.v)){
                    if(visited[p.v]) continue;
                    q.add(p);
                    ans = Math.min(ans,p.d);
                }
                
                visited[tmp.v] = true;
            }

        }
        return ans;
    }

    static class Pair{
        public int v,d;
        public Pair(int v, int d){
            this.v = v;
            this.d = d;
        }
    }

}