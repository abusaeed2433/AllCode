// https://leetcode.com/problems/score-of-parentheses

class Solution {
    public int scoreOfParentheses(String s) {
        int lb = 0, rb = 0, ans = 0;

        for(int i=0; i<s.length(); i++){
            if(s.charAt(i)=='(') lb++;
            else{
                if(lb > 0){
                    lb--;
                    ans++;
                }
            }
        }

        return ans;

    }
}