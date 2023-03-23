// https://leetcode.com/problems/find-and-replace-pattern

class Solution {
    int[] map = new int[26];
    int[] map2 = new int[26];

    public List<String> findAndReplacePattern(String[] words, String pattern) {
        
        List<String> ans = new ArrayList<>();

        for(String s : words){
            if(doesMatch(s,pattern)) ans.add(s);
        }

        return ans;

    }

    private boolean doesMatch(String s, String pat){

        if(s.length() != pat.length()) return false;

        for(int i=0;i<26;i++) map[i] = map2[i] = -1; // resetting

        for(int i=0;i<s.length();i++){
            int ind = pat.charAt(i) - 97;
            int ind2 = s.charAt(i) - 97;

            if( (map[ind] == -1 || map[ind] == s.charAt(i)) &&
                (map2[ind2] == -1 || map2[ind2] == pat.charAt(i))
            )
            {
                map[ind] = s.charAt(i);
                map2[ind2] = pat.charAt(i);
            }
            else{
                return false;
            }
        }

        return true;

    }
}