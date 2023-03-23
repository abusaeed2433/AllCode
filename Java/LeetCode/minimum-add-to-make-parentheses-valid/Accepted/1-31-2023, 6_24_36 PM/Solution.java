// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid

class Solution {
    public int minAddToMakeValid(String s) {
        
        int ans = 0;
        Stack<Character> stk = new Stack<>();

        for(int i=0;i<s.length();i++){

            if(stk.empty()){
                stk.push(s.charAt(i));
                continue;
            }

            if( stk.peek() == '(' && s.charAt(i)==')'){
                stk.pop();
            }
            else{
                stk.push(s.charAt(i));
            }
        }

        return stk.size();
    }
}