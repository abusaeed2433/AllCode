// https://leetcode.com/problems/edit-distance

class Solution {
    private String word1, word2;
    private int n1, n2;
    private int[][] dp;
    public int minDistance(String word1, String word2) {
        this.word1 = word1;
        this.word2 = word2;
        n1 = word1.length();
        n2 = word2.length();
        dp = new int[n1][n2];
        for(int i=0;i<n1;i++)
            for(int j=0; j<n2; j++)
                dp[i][j] = -1;

        return getAns(0,0);
    }

    private int getAns(int i, int j){
        if(i>=n1){//insert
            return n2-j;
        }
        if(j>=n2){//delete
            return n1-i;
        }
        
        if(dp[i][j] != -1) return dp[i][j];

        if(word1.charAt(i)==word2.charAt(j)){
            dp[i][j] = getAns(i+1,j+1);
        }
        else{
            dp[i][j] = 1 + Math.min(
                Math.min(
                    getAns(i,j+1),
                    getAns(i+1,j)
                ),
                getAns(i+1,j+1)
            );
        }
        return dp[i][j];
    }
}