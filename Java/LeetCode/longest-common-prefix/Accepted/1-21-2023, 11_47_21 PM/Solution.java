// https://leetcode.com/problems/longest-common-prefix

class Solution {
    public String longestCommonPrefix(String[] strs) {
        int index = -1;
        for(int i=0;i<=200;i++){
            if(i >= strs[0].length()) break;

            Character ch = strs[0].charAt(i);
            boolean isSame = true;
            for(String s : strs){
                if(i >= s.length()){
                    isSame = false;
                    break;
                }

                if(s.charAt(i) != ch){
                    isSame = false;
                    break;
                }
            }

            if(isSame){
                index = i;
            }
            else{
                break;
            }
        }

        if(index == -1) return "";
        return strs[0].substring(0,index+1);
    }
}