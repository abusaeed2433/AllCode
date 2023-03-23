// https://leetcode.com/problems/greatest-common-divisor-of-strings

class Solution {

    String s1, s2;
    int n1, n2;

    public String gcdOfStrings(String str1, String str2) {
        
        s1 = str1;
        s2 = str2;
        
        n1 = str1.length();
        n2 = str2.length();

        int min = Math.min(n1,n2);

        while(min > 0){
            if(n1 % min == 0 && n2 % min == 0){
                String tmp1 = isPossible(s1,min);
                String tmp2 = isPossible(s2,min);
                if(tmp1 != null && tmp2 != null && tmp1.equals(tmp2)){
                    return tmp1;
                }
            }
            min--;
        }

        return "";
        
    }

    private String isPossible(String s, int len){
        int i = 0;
        String sub = null, sub2;
        while(i<s.length()){
            sub2 = s.substring(i,i+len);
            if(sub != null && !sub2.equals(sub))
                return null;
            sub = sub2;
            i += len;
        }
        return sub;
    }
}