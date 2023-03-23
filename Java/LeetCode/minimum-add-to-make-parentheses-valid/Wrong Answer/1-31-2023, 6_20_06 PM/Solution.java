// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid

class Solution {
    public int minAddToMakeValid(String s) {
        
        int ans = 0;
        Stack<Character> stk = new Stack<>();

        for(int i=0;i<s.length();i++){
            if(stk.empty() || stk.peek() == s.charAt(i)){
                stk.push(s.charAt(i));
            }
            else{
                stk.pop();
            }
        }

        return stk.size();
    }
}