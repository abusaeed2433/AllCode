// https://leetcode.com/problems/jump-game-iv

class Solution {

    public int minJumps(int[] arr) {
        int n = arr.length;
        //Map<Integer,List<Integer>> adj = new HashMap<>();
        Map<Integer,List<Integer>> map = new HashMap<>();

        for(int i=0;i<n;i++){
            List<Integer> list=map.getOrDefault(arr[i],new ArrayList<>());
            
            // adj.add(new ArrayList<>());
            
            // if(i-1 >= 0) {                
            //     adj.get(i).add(i-1);
            // }
            // if(i+1 < n) {
            //     adj.get(i).add(i+1);
            // }

            // for(int ind : list){
            //     adj.get(i).add(arr[i]);
            //     adj.get(ind).add(i);
            // }

            list.add(i);
            map.put(arr[i],list);

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
                adj.clear();
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
