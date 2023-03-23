// https://leetcode.com/problems/minimize-deviation-in-array

class Solution {
    public int minimumDeviation(int[] nums) {

        PriorityQueue<Integer> pq = new PriorityQueue<Integer>();
        int mi = Integer.MAX_VALUE, ans = Integer.MAX_VALUE;

        for(int n : nums){
            if(n%2==1) n*=2;

            mi = Math.min(mi,n);
            pq.add(-n);
        }

        while(true){
            int a = -pq.poll();
            ans = Math.min(ans,a-mi);
            if(a%2==1) break;

            mi = Math.min(a/2,mi);

            pq.add(-a/2);
        }

        return ans;

    }
}