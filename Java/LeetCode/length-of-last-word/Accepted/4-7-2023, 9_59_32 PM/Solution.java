// https://leetcode.com/problems/length-of-last-word

import java.util.regex.Matcher;
import java.util.regex.Pattern;
class Solution {
    public int lengthOfLastWord(String s) {
        s = s.trim();
        
        return s.length() - s.lastIndexOf(' ') -1;

    }
}