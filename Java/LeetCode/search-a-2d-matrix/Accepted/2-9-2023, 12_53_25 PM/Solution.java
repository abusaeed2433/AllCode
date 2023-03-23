// https://leetcode.com/problems/search-a-2d-matrix

class Solution {

    private int[][] mat;
    private int target, row, col;

    public boolean searchMatrix(int[][] matrix, int target) {
        mat = matrix;
        this.target = target;
        row = mat.length;
        col = mat[0].length;

        return bSearch(0,row*col-1);

    }

    private boolean bSearch(int l, int h){
        while(l <= h){
            int mid = (l+h)/2;
            int i = mid / col;
            int j = mid % col;

            if(mat[i][j] < target) l = mid+1;

            else if(mat[i][j] == target) return true;

            else
                h = mid-1;            
        }
        return false;
    }
}