// https://leetcode.com/problems/search-a-2d-matrix-ii

class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        
        int i = 0, j = 0, m = matrix.length-1, n = matrix[0].length-1;
        while(i<m && j<n){
            int i1 = (i+m)/2;
            int j1 = (j+n)/2;
            if(matrix[i1][j1] == target) return true;

            if(i == i1 && j==j1) return false;

            if(matrix[i1][j1] < target){
                i = i1;
                j = j1;
            }
            else{
                m = i1;
                n = j1;
            }
        }

        return false;
    }
}