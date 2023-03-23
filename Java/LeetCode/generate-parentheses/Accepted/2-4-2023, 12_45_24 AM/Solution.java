// https://leetcode.com/problems/generate-parentheses

class Solution {

    private StringBuilder sb = new StringBuilder();
    private int n;
    private List<String> list = new ArrayList<>();

    public List<String> generateParenthesis(int n) {
        this.n = n;
        backTrack(0,0);
        return list;
    }

    private void backTrack(int lb, int rb){//left bracket, right bracket

        if(rb > lb) {
            
            return;
        }
        
        if(lb == n && rb == n) {
            list.add(sb.toString());
            //sb.setLength(sb.length()-1); //removing last one
            return;
        }

        
        if(lb < n)
        {
            sb.append('(');
            backTrack(lb+1,rb);
            sb.setLength(sb.length()-1);
        }

        if(rb < n){
            sb.append(')');
            backTrack(lb,rb+1); 
            sb.setLength(sb.length()-1);       
        }
        
    }

}