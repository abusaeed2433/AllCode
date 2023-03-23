// https://leetcode.com/problems/palindromic-substrings

class Solution {
    public int countSubstrings(String s) {
        
        int count = s.length();

        for(int i=2;i<=s.length();i++){

            for(int j=0;j<=s.length()-i;j++){

                int end = j+i;
                boolean isPossible = true;
                for(int k=j; k<j+i/2; k++){
                    if(s.charAt(k) != s.charAt(end-1-k+j)){
                        isPossible = false;
                        break;
                    }
                }
                if(isPossible) count++;
                System.out.println(count);
            }

            

        }
        return count;

    }
}