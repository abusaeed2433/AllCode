// https://leetcode.com/problems/find-closest-node-to-given-two-nodes

class Solution {
    public int closestMeetingNode(int[] edges, int node1, int node2) {
        
        int n = edges.length;
        int[] dist1 = new int[n];
        int[] dist2 = new int[n];

        for(int i=0;i<n;i++){
            dist1[i] = dist2[i] = Integer.MAX_VALUE;
        }

        int nd = node1;
        dist1[nd] = 0;
        while( edges[nd] !=-1 && dist1[edges[nd]] == Integer.MAX_VALUE ){
            dist1[edges[nd]] = dist1[nd]+1;
            nd = edges[nd];
        }

        for(int i=0;i<n;i++)
            System.out.print(dist1[i]+" ");
        System.out.println("");        

        nd = node2;
        dist2[nd] = 0;
        while( edges[nd] !=-1 && dist2[edges[nd]] == Integer.MAX_VALUE ){
            dist2[edges[nd]] = dist2[nd]+1;
            nd = edges[nd];
        }

        for(int i=0;i<n;i++)
            System.out.print(dist2[i]+" ");
        System.out.println("");        

        int min = Integer.MAX_VALUE, ans = -1;

        for(int i=0;i<n;i++){
            if( min > Math.max(dist1[i], dist2[i]) ){
                min = Math.max(dist1[i], dist2[i]);
                ans = i;
            }
        }

        return ans;


    }

}