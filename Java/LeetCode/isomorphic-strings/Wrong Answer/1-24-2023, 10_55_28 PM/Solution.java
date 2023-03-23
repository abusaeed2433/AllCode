// https://leetcode.com/problems/isomorphic-strings

class Solution {
    public boolean isIsomorphic(String s, String t) {

        if(s.length() != t.length()) return false;

        int[] arr = new int[128];
        for(int i=0;i<128;i++) arr[i] = -1;

        for(int i=0; i<s.length(); i++){
            if(arr[s.charAt(i)] == -1){
                arr[s.charAt(i)] = t.charAt(i);
            }
            else if(arr[s.charAt(i)] != t.charAt(i)){
                    return false;
            }
        }

        return true;

    }
}