// https://leetcode.com/problems/letter-combinations-of-a-phone-number

class Solution {
    
    List<String> ans = new ArrayList<>();
    String[] values = new String[]{
        "abc", "def", "ghi","jkl","mno","pqrs","tuv","wxyz"
    };
    StringBuilder sb = new StringBuilder();

    public List<String> letterCombinations(String digits) {
        if(digits.length() == 0) return ans;
        solve(digits,0,0);
        return ans;
    }

    private void solve(String digits, int level, int index){
        
        if(level >= digits.length()) {
            ans.add( sb.toString());
            return;
        }

        int ind = digits.charAt(level) - 50;

        for(int i=0; i<values[ind].length(); i++){
            sb.append(values[ind].charAt(i));
            solve(digits,level+1,0);
            sb.setLength(Math.max(sb.length() - 1, 0));
        }
        //int i = digits.charAt(index) - 50;

    }
}