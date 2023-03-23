// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
    public int strStr(String haystack, String needle) {
        //return haystack.indexOf(needle);
        int n1 = haystack.length();
        int n2 = needle.length();    
        for(int i=0; i+n2-1<n1;i++){
            if(haystack.substring(i,i+n2).equals(needle)){
                return i;
            }
        }

        return -1;
    }
}