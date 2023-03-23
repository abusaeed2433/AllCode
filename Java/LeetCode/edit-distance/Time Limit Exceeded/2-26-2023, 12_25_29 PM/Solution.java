// https://leetcode.com/problems/edit-distance

class Solution {
    private String word1, word2;
    private int n1, n2;
    public int minDistance(String word1, String word2) {
        this.word1 = word1;
        this.word2 = word2;
        n1 = word1.length();
        n2 = word2.length();

        return getAns(0,0);
    }

    private int getAns(int i, int j){
        if(i>=n1){//insert
            return n2-j;
        }
        if(j>=n2){//delete
            return n1-i;
        }
        if(word1.charAt(i)==word2.charAt(j)){
            return getAns(i+1,j+1);
        }
        else{
            int ans = Math.min(getAns(i,j+1),getAns(i+1,j));
            return 1 + Math.min(ans,getAns(i+1,j+1));
        }
    }
}