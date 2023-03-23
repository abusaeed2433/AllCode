// https://leetcode.com/problems/minimum-score-of-a-path-between-two-cities

class Solution {
    private Map<Integer,List<Pair>> adj = new HashMap<>();
    private boolean[] visited;
    public int minScore(int n, int[][] roads) {        
        this.visited = new boolean[n];

        for(int[] road : roads){
            int a = road[0]-1, b = road[1]-1, d = road[2];

            adj.computeIfAbsent(a, k->{
                return new ArrayList<Pair>();
            }).add(new Pair(b,d));

            adj.computeIfAbsent(b, k-> new ArrayList<Pair>())
                .add(new Pair(a,d));                        
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
                visited[tmp.v] = true;

                for(Pair p : adj.get(tmp.v)){
                    if(visited[p.v]) continue;
                    q.add(p);
                }
                ans = Math.min(ans,tmp.d);
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