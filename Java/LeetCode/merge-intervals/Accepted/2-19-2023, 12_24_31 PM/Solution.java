// https://leetcode.com/problems/merge-intervals

class Solution {
    public int[][] merge(int[][] intervals) {
        
        List<int[]> ans = new ArrayList<>();
        Arrays.sort(intervals, (o1,o2) -> o1[0]-o2[0]);

        int i = 0, n = intervals.length;

        while( i < n ){
            int j = i+1;
            while( j < n ){
                if(intervals[i][1] >= intervals[j][0]){
                    intervals[i][1] = Math.max(intervals[i][1],intervals[j][1]);
                    j++;
                }
                else{
                    break;
                }
            }
            ans.add(intervals[i]);
            i = j;
        }        
        return ans.toArray(new int[ans.size()][]);

    }
}