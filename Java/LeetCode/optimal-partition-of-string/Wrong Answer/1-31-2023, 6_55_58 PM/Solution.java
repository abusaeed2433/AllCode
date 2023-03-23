// https://leetcode.com/problems/optimal-partition-of-string

class Solution {

    int[] map = new int[26];

    public int partitionString(String s) {
        int ans = 1, prev = 0;
        resetMap();

        for(int i=0;i<s.length();i++){
            if(map[s.charAt(i)-97] != -1){

                System.out.println(s.charAt(i)+" "+i);
            
                ans++;            
                int tmp = map[ s.charAt(i)-97 ] + 1;
                
                resetMap();
                while(tmp <= i){
                    map[ s.charAt(tmp)-97 ] = tmp;
                    tmp++;
                }
            }
            else{
                map[ s.charAt(i)-97 ] = i;
            }
        }

        return ans;
    }

    private void resetMap(){
            for(int i=0;i<26;i++) map[i] = -1;
    }
}