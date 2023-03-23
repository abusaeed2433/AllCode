// https://leetcode.com/problems/spiral-matrix-ii

class Solution {
    private int num = 1;
    private int n;
    public int[][] generateMatrix(int n) {
        int[][] matrix = new int[n][n];

        this.n = n;
        int mid = (int)Math.ceil(n/2f);
        for(int i=0;i<mid;i++){
            for(int j=i; j<n-i;j++) matrix[i][j] = num++;
            for(int j=i+1; j<n-i;j++) matrix[j][n-1-i] = num++;
            for(int j=n-2-i; j>=i; j--) matrix[n-1-i][j] = num++;
            for(int j=n-2-i; j>i;j--) matrix[j][i] = num++;
        }

        return matrix;

    }
}