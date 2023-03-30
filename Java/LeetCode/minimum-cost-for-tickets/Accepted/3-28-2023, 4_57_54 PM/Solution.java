// https://leetcode.com/problems/minimum-cost-for-tickets

class Solution {
    public int mincostTickets(int[] days, int[] costs) {
        int[] dp = new int[366];
        int prev = 1;

        for(int d : days){

            while(prev < d){
                dp[prev] = dp[prev-1];
                prev++;
            }

            dp[d] = dp[d-1] + costs[0];
            dp[d] = Math.min(dp[d],dp[Math.max(0,d-7)]+costs[1]);
            dp[d] = Math.min(dp[d],dp[Math.max(0,d-30)]+costs[2]);

            // for(int i=0;i<10;i++){
            //     System.out.print(dp[i]+" ");
            // }
            // System.out.println("");
            prev = d+1;
        }

        return dp[days[days.length-1]];
    }
}