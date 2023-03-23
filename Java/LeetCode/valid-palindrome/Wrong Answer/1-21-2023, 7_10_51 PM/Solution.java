// https://leetcode.com/problems/valid-palindrome

class Solution {
    public boolean isPalindrome(String s) {
        int i=0;
        int j = s.length() - 1;

        while(i < j){
            Character c1 = Character.toLowerCase(s.charAt(i));
            Character c2 = Character.toLowerCase(s.charAt(j));
            if(isInValid(c1)){
                i++;            
                continue;
            }
            if(isInValid(c2)){
                j--;
                continue;
            }

            if(c1 != c2) return false;
            i++; 
            j--;

        }
        return true;
    }

    public boolean isInValid(Character c){
        return (c < 'a' || c > 'z');
    }
}