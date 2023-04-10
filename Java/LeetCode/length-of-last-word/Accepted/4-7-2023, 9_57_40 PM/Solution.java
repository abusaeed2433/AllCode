// https://leetcode.com/problems/length-of-last-word

import java.util.regex.Matcher;
import java.util.regex.Pattern;
class Solution {
    public int lengthOfLastWord(String s) {
        String reg = "\\b[\\w]+\\b";

        Pattern pat = Pattern.compile(reg);
        Matcher m = pat.matcher(s);

        int ans = 0;
        while(m.find()){
            ans = m.end() - m.start();
        }
        return ans;

    }
}