// https://leetcode.com/problems/non-overlapping-intervals

class Solution {
    public int eraseOverlapIntervals(int[][] intervals) {
        
        Arrays.sort(intervals,(o1,o2)-> o1[1]-o2[1]);

        

        int count = 1, n = intervals.length;
        int prev = intervals[0][1];
        
        for(int i=1;i<n;i++){
            if(intervals[i][0] >= prev){
                count++;
                prev = intervals[i][1];
            }
        }

        return n-count;

        
        
    }
}