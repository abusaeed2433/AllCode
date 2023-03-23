// https://leetcode.com/problems/reshape-the-matrix

class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        
        int[][] arr = new int[r][c];
        int ri = 0, ci = 0;

        int m = mat.length, n = mat[0].length;

        if( m*n != r*c ) return mat;

        for(int i=0; i<mat.length; i++){

            for(int j=0; j<mat[i].length; j++){

                arr[ri][ci] = mat[i][j];
                ci++;
                if(ci >= c){
                    ci = 0;
                    ri++;
                }

            }

        }

        return arr;

    }
}