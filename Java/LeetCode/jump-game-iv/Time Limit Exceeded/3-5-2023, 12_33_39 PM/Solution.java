// https://leetcode.com/problems/jump-game-iv

class Solution {
    private List<List<Integer>> adj;

    public int minJumps(int[] arr) {
        int n = arr.length;
        adj = new ArrayList<>();        

        Map<Integer,List<Integer>> map = new HashMap<>();

        for(int i=0;i<n;i++){
            List<Integer> list=map.getOrDefault(arr[i],new ArrayList<>());
            
            adj.add(new ArrayList<>());
            
            if(i-1 >= 0) {                
                adj.get(i).add(i-1);
            }
            if(i+1 < n) {
                adj.get(i).add(i+1);
            }

            for(int ind : list){
                adj.get(i).add(ind);
                adj.get(ind).add(i);
            }

            list.add(i);
            map.put(arr[i],list);

        }


        // for(int i=0;i<n;i++){
        //     System.out.printf("%d: ",i);
        //     for(int x : adj.get(i)){
        //         System.out.printf("%d ",x);
        //     }
        //     System.out.println("");
        // }

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
                for(int ind : adj.get(x)){
                    q.add(ind);
                }
                visited[x] = true;
            }
            ans++;
        }
        return ans;

    }

}
