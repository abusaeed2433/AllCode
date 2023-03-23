// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days

class Solution {
    private int[] weights;
    private int days;
    private int n;
    public int shipWithinDays(int[] weights, int days) {
        
        this.weights = weights;
        this.days = days;
        this.n = weights.length;
        int sum = 0, ans = Integer.MIN_VALUE;
        
        for(int w : weights){
            sum += w;
            ans = Math.max(ans,w);
        }

        if(isPossible(ans)) return ans;

        while(ans <= sum){
            
            int mid = (ans+sum)/2;
//            System.out.println(ans +" "+sum +" "+mid);
            if(isPossible(mid)){
                sum = mid-1;
            }
            else{
                ans = mid+1;
            }
            
        }

        return ans;
    }

    private boolean isPossible(int cap){
        int count = 0, cur = 0;
        for(int weight : weights){
            cur += weight;
            if(cur >= cap){
                count++;
                cur = (cur==cap) ? 0 : weight;
            }
        }
        if(cur > 0) count++;
        return (count <= days);

    }

}