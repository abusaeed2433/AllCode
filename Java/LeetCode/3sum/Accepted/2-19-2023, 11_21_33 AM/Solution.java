// https://leetcode.com/problems/3sum

class Solution {
    
    private List<List<Integer>> ans = new ArrayList<>();
    private Map<Integer,Integer> map = new HashMap<>();
    Set<List<Integer>> s = new HashSet<>();
    
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        for(int i=0;i<n;i++){
            map.put( nums[i], map.getOrDefault(nums[i],0)+1 );
        }

        for(int i=0;i<n;i++){
            int j = i+1, k = n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum == 0){
                    s.add(Arrays.asList(nums[i],nums[j],nums[k]));
                    j++;
                    k--;
                }
                else if(sum < 0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        ans.addAll(s);
        return ans;
    }
    
}