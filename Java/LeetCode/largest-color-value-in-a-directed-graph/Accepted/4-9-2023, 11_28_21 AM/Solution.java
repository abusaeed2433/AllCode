// https://leetcode.com/problems/largest-color-value-in-a-directed-graph

class Solution {
    public int largestPathValue(String colors, int[][] edges) {
        int n = colors.length();
        int inc = 0;
        
        Map<Integer, List<Integer> > adj = new HashMap<>();

        int[] indeg = new int[n];

        for(int[] edge : edges){
            adj.computeIfAbsent(edge[0], k->{
                return new ArrayList<Integer>();
            }).add(edge[1]);
            indeg[edge[1]]++;
        }

        int[][] count = new int[n][26];

        Queue<Integer> q = new LinkedList<>();

        for(int i=0; i<n; i++){
            if(indeg[i] == 0){
                q.add(i);
            }
        }

        int ans = 1, seen = 0;

        while(!q.isEmpty()){
            int node = q.poll();
            seen++;

            count[node][ colors.charAt(node)-'a' ]++;
            ans = Math.max(count[node][colors.charAt(node)-'a'],ans);

            if(!adj.containsKey(node)) continue;

            for(int ngh : adj.get(node)){
                for(int i=0; i<26; i++){
                    count[ngh][i] = Math.max(count[ngh][i],count[node][i]);
                }
                if( --indeg[ngh] <= 0) {
                    q.add(ngh);
                    // System.out.println(inc + " --> "+ngh);
                    // inc++;
                }
            }
        }


        return seen < n ? -1 : ans;




    }
}