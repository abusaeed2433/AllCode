// https://leetcode.com/problems/search-a-2d-matrix-ii

class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        
        int i = 0, j = 0, m = matrix.length, n = matrix[0].length;

        while(i<m && j<n){
            if(matrix[i][j] == target) return true;
            if(matrix[i][j] > target) return false;

            if(i == m-1 && j==n-1) return false;
            int ii = 0, ji = 0;

            if(i < m-1 && matrix[i+1][j] < target) ii = 1;
            if(j < n-1 && matrix[i][j+1] < target) ji = 1;
            
            if(ii==0 && ji == 0) return false;
            
            i += ii;
            j += ji;

            System.out.println(i+", "+j);
        }

        return false;
    }
}