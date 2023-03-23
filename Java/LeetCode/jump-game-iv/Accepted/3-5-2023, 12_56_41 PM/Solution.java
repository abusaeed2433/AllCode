// https://leetcode.com/problems/jump-game-iv

class Solution {

    public int minJumps(int[] arr) {
        int n = arr.length;
        Map<Integer,List<Integer>> map = new HashMap<>();

        for(int i=0;i<n;i++){
            map.computeIfAbsent(arr[i],v->{
                return new LinkedList<>();
            }).add(i);
        }

        int ans = 0;
        Queue<Integer> q = new LinkedList<>();
        q.add(0);
        boolean[] visited = new boolean[n];

        while(!q.isEmpty()){
            int size = q.size();

            while(size-- >0){
                int x = q.poll();
                if(x == n-1) return ans;

                if(visited[x]) continue;

                List<Integer> adj = map.get(arr[x]);
                for(int ind : adj){
                    q.add(ind);                    
                }

                adj.clear(); // removing hudai search
                
                visited[x] = true;
                if(x+1 < n && !visited[x+1]){
                    q.add(x+1);
                }
                if(x-1 >=0 && !visited[x-1]){
                    q.add(x-1);
                }
            }
            ans++;
        }
        return ans;

    }

}
