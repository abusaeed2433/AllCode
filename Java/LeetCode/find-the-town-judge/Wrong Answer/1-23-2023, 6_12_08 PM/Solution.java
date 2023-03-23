// https://leetcode.com/problems/find-the-town-judge

class Solution {
    public int findJudge(int n, int[][] trust) {
        
        int prev = -1;
        for(int i=0;i<trust.length;i++){
            if(prev == - 1){
                prev = trust[i][1];
                continue;
            }

            if(trust[i][1] != prev){
                return -1;
            }
        }

        return prev;
        
        

    }
}