// https://leetcode.com/problems/scramble-string

class Solution {
    
    private Map<String,Boolean> mainMap = new HashMap<>();

    public boolean isScramble(String s1, String s2) {
                
        if(s1.equals(s2)) {
            mainMap.put(s1+"_"+s2,true);
            return true;
        }

        String tmp = s1+"_"+s2;
        if(mainMap.containsKey(tmp)){
            return mainMap.get(tmp);
        }
        
        int n1 = s1.length();
        int n2 = s2.length();

        // //Sorry
        // if(s1.equals("eebaacbcbcadaaedceaaacadccd") && 
        //     s2.equals("eadcaacabaddaceacbceaabeccd")) return false;
        int[] map = new int[26];
        
        for(int i=0; i<n1; i++){
            map[s1.charAt(i)-'a']++;
            map[s2.charAt(i)-'a']--;
        }

        for(int i=0;i<26;i++){
            if(map[i] != 0) {
                mainMap.put(tmp,false);
                return false;
            }
        }

        for(int i=1; i<n1;i++){
            if(
                isScramble(s1.substring(0,i),s2.substring(0,i)) &&
                isScramble(s1.substring(i),s2.substring(i))
            )
            {
                mainMap.put(tmp,true);
                return true;
            }

            if(
                isScramble(s1.substring(0,i),s2.substring(n1-i)) && 
                isScramble(s1.substring(i),s2.substring(0,n1-i))
            ){
                mainMap.put(tmp,true);
                return true;
            }
        }

        mainMap.put(tmp,false);
        return false;

    }
}