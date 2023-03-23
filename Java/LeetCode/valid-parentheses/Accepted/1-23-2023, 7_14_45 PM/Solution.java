// https://leetcode.com/problems/valid-parentheses

class Solution {
    public boolean isValid(String s) {
        
        char[] stack = new char[s.length()];
        int top = -1;

        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);
            if( ch == '(' || ch == '{' || ch == '['){
                top++;
                stack[top] = ch;
            }
            else{
                if(top == -1) return false;

                char sc = stack[top];
                if( ( ch == ')' && sc == '(') || ( ch == '}' && sc == '{') ||
                    ( ch == ']' && sc == '[') ){
                        top--;
                    }
                    else{
                        return false;
                    }

            }
        }
        return top<0;
    }
}