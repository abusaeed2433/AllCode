// https://leetcode.com/problems/valid-sudoku

class Solution {
    public boolean isValidSudoku(char[][] board) {

        if( !isPossible(board,true) ) return false;
        if( !isPossible(board,false) ) return false;                

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

    private boolean isPossible(char[][] board, boolean rowCheck){
        
        for(int i=0; i<9; i++){
            HashMap<Character,Boolean> map = new HashMap<>();
            for(int j=0; j<9; j++){
                int ni = rowCheck ? i : j;
                int nj = rowCheck ? j : i;
                
                if(board[nj][ni]=='.') continue;
                if(map.containsKey(board[nj][ni])) return false;
                map.put(board[nj][ni],true);
            }            

        }
        return true;

    }

}
