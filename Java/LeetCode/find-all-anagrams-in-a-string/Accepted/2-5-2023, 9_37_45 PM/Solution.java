// https://leetcode.com/problems/find-all-anagrams-in-a-string

class Solution {
    private int[] map = new int[26];
    private int[] map2 = new int[26];

    public List<Integer> findAnagrams(String s, String p) {
        
        int n1 = s.length(), n2 = p.length();

        List<Integer> list = new ArrayList<>();

        if(n1 < n2) return list;

        for(int i=0; i<26; i++) map[i] = map2[i] = 0;

        for(int i=0; i<n2; i++) {
            map[ s.charAt(i) -97 ]++;
            map2[ p.charAt(i)-97 ]++;
        }

        int i = 0;
        do{
            if(doesMatch()){
                list.add(i);
            }

            map[ s.charAt(i) - 97 ]--;
            if( i+n2 < n1){
                map[ s.charAt(i + n2) - 97 ]++;
            }
            i++;

        }
        while( i < (n1-(n2-1)));

        return list;
    }

    private boolean doesMatch(){
        for(int i=0; i<26; i++){
            if(map[i] != map2[i]) return false;
        }
        return true;
    }
}