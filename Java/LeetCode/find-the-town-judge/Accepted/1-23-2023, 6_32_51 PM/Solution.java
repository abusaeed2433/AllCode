// https://leetcode.com/problems/find-the-town-judge

class Solution {
    public int findJudge(int n, int[][] trust) {
        
        Node[] arr = new Node[n+1];
        for(int i=0;i<n+1;i++) arr[i] = new Node();
    
        for(int i=0;i<trust.length;i++){
            arr[ trust[i][0] ].hasTrusted = true;
            arr[ trust[i][1] ].total++;
        }

        for(int i=1;i<=n;i++){
            if(!arr[i].hasTrusted && arr[i].total == n-1) return i;
        }

        return -1;
    }
}

class Node{
    int total = 0;
    boolean hasTrusted = false;
}