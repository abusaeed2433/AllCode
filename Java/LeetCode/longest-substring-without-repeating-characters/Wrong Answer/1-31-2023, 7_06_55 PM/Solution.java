// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
    
    Map<Character,Integer> map = new HashMap<>();

    public int lengthOfLongestSubstring(String s) {
        int ans = 0, prev = 0;
        resetMap();

        for(int i=0;i<s.length();i++){
            if(map.containsKey(s.charAt(i))){

                ans = Math.max(ans, i-prev);

                int tmp = map.get( s.charAt(i) ) + 1;
                prev = tmp;
                
                resetMap();
                while(tmp <= i){
                    map.put( s.charAt(tmp) , tmp);
                    tmp++;
                }
            }
            else{
                map.put(s.charAt(i) , i);
            }
        }

        return ans;
    }

    private void resetMap(){
        map.clear();
    }

}
