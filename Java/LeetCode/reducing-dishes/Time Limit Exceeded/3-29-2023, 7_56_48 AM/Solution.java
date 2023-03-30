// https://leetcode.com/problems/reducing-dishes

class Solution {
    private int ans = 0;
    private int[] sat;
    private int n;
    public int maxSatisfaction(int[] satisfaction) {
        this.sat = satisfaction;
        this.n = sat.length;
        Arrays.sort(this.sat);
        calc(0,0,0);
        return ans;
    }
    private void calc(int cur,int i,int rl){
        if(i>=n){
            ans = Math.max(ans,cur);
            return;
        }        
        calc(cur+(rl+1)*sat[i],i+1,rl+1);
        if(sat[i] < 0){
            calc(cur,i+1,rl);
        }
    }
}