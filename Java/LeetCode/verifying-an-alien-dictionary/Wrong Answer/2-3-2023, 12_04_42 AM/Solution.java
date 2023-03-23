// https://leetcode.com/problems/verifying-an-alien-dictionary

class Solution {
    int[] indices = new int[26];

    public boolean isAlienSorted(String[] words, String order) {
        int n = order.length();

        

        for(int i=0;i<n;i++)
            indices[ order.charAt(i) - 97] = i;
        
        
        for(int i=0;i<words.length;i++){
            
            for(int j=i+1;j<words.length;j++){
                if(!isValid(words[i],words[j])) return false;
            }
            

        }

        return true;

    }

    private boolean isValid(String s, String t){
        int min = Math.min(s.length(),t.length());

        for(int i=0;i<min;i++){
            if(indices[s.charAt(i)-97] < indices[t.charAt(i)-97]) return true;
            if(indices[s.charAt(i)-97] > indices[t.charAt(i)-97]) 
                        return false;      
        }

        return s.length() < t.length();

    }

}