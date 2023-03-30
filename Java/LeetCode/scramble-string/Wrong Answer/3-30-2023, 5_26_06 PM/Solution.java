// https://leetcode.com/problems/scramble-string

class Solution {
    public boolean isScramble(String s1, String s2) {
        int dif = 0;
        Map<Character,Integer> map1 = new HashMap<>();
        Map<Character,Integer> map2 = new HashMap<>();

        for(int i=0;i<s1.length();i++){
            Character ch1 = s1.charAt(i);
            Character ch2 = s2.charAt(i);
            if(ch1 != ch2) dif++;
            map1.put(ch1,map1.getOrDefault(ch1,0)+1);
            map2.put(ch2,map2.getOrDefault(ch2,0)+1);
        }

        for(Character ch = 'a'; ch <= 'z'; ch++){
            if(map1.getOrDefault(ch,0) != map2.getOrDefault(ch,0)){
                return false;
            }
        }
        return dif % 2 == 0;

    }
}