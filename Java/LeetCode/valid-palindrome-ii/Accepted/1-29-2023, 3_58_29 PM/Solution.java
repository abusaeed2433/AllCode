// https://leetcode.com/problems/valid-palindrome-ii

class Solution {
    public boolean validPalindrome(String s) {
        
        return isValid(0,s.length()-1,s,true);

    }

    private boolean isValid(int i, int j, String s, boolean isAvailable){
        
        while(i < j){

            if( s.charAt(i) != s.charAt(j) ){
                if(isAvailable) {
                    isAvailable = false;

                    if(i == j-1) return true;

                    if( s.charAt(i+1) == s.charAt(j)){
                        return isValid(i+1, j, s, false) || 
                                isValid(i,j-1,s,false);
                    }
                    else if( s.charAt(i) == s.charAt(j-1) ){
                        return isValid(i,j-1,s,false) ||
                                isValid(i+1,j,s,false);
                    }
                    else{
                        return false;
                    }

                }
                else{
                    return false;
                }


            }
            else{
                i++;
                j--;
            }
        }

        return !(i<j);
    }

}