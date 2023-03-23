// https://leetcode.com/problems/minimize-deviation-in-array

class Solution {
    public int minimumDeviation(int[] nums) {
        int n = nums.length;
        
        for(int i=0; i<n; i++){
            int tmp = nums[i];
            while(tmp%2==0) tmp/=2;
            nums[i] = tmp;
        }

        Arrays.sort(nums);

        int ans = 0;

        for(int i=0; i<n; i++){
            
            int nw = Math.min( nums[n-1] - nums[i],
                            Math.abs(nums[n-1]-2*nums[i]) );
            ans = Math.max( ans, nw );

        }

        return ans;

    }
}