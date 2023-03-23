// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid

class Solution {
    public int minAddToMakeValid(String s) {
        int lb = 0, rb = 0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i) == '(') lb++;
            if(s.charAt(i) == ')') rb++;
        }

        return Math.abs(lb-rb);
    }
}