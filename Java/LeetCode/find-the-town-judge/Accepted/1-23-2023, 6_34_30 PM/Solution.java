// https://leetcode.com/problems/find-the-town-judge

class Solution {
    public int findJudge(int n, int[][] trust) {
        
        int[] arr = new int[n+1];
        boolean[] tt = new boolean[n+1];
    
        for(int i=0;i<trust.length;i++){
            tt[ trust[i][0] ] = true;
            arr[ trust[i][1] ]++;
        }

        for(int i=1;i<=n;i++){
            if(!tt[i] && arr[i] == n-1) return i;
        }

        return -1;
    }
}
