// https://leetcode.com/problems/valid-sudoku

class Solution {
    public boolean isValidSudoku(char[][] board) {
        for(int i=0; i<9; i++){

            HashMap<Character,Boolean> map = new HashMap<>();
            for(int j=0; j<9; j++){
                if(board[j][i]=='.') continue;
                if(map.containsKey(board[j][i])) return false;
                map.put(board[j][i],true);
            }            

        }

        System.out.println("idiot");

        HashMap<Character, Boolean>[] map = new HashMap[9];
        for(int i=0; i<9; i++)
            map[i] = new HashMap<>();
        
        for(int i=0; i<9; i++){
                    
            for(int j=0; j<9; j++){
                if(board[i][j] == '.') continue;

                if(i < 3)
                {
                    if( map[j/3].containsKey(board[i][j] ) ) return false;
                    map[j/3].put(board[i][j], true);
                }

                else if(i < 6)
                {
                    if( map[3+j/3].containsKey(board[i][j] ) ) return false;
                    map[3+j/3].put(board[i][j],true);
                }
                else{
                    if( map[6+j/3].containsKey(board[i][j] ) ) return false;
                    map[6+j/3].put(board[i][j],true);
                }                            
            }

        }

        return true;

    }

}
