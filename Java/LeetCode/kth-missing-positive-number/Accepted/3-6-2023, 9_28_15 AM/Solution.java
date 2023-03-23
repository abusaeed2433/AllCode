// https://leetcode.com/problems/kth-missing-positive-number

class Solution {
    public int findKthPositive(int[] arr, int k) {
        Map<Integer,Boolean> map = new HashMap<>();
        for(int n:arr){
            map.put(n,true);
        }

        int ans = 1,count=1;
        while(count<=k){
            if(!map.containsKey(ans)){
                count++;
            }
            ans++;
        }

        return ans-1;
    }
}