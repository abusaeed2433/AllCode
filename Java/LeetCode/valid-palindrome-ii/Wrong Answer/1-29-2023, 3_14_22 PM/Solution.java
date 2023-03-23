// https://leetcode.com/problems/valid-palindrome-ii

class Solution {
    public boolean validPalindrome(String s) {
        int i=0, j = s.length()-1;

        boolean isAvailable = true;
        
        //  abbad
        //  ad

        while(i < j){

            if( s.charAt(i) != s.charAt(j) ){
                if(isAvailable) {
                    isAvailable = false;

                    if(i == j-1) return true;

                    if( s.charAt(i+1) == s.charAt(j)){
                        i++;
                    }
                    else if( s.charAt(i) == s.charAt(j-1) ){
                        j--;
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