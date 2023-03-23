// https://leetcode.com/problems/add-binary

class Solution {
    private int carry = 0;
    public String addBinary(String a, String b) {
        
        int na = a.length()-1, nb = b.length()-1;
        StringBuilder sb = new StringBuilder();

        while( na>=0 || nb >=0 ){
            
            int ca = na >= 0 ? a.charAt(na) - 48 : 0;
            int cb = nb >= 0 ? b.charAt(nb) - 48 : 0;

            sb.append( getSum(ca,cb) );
            na--;
            nb--;
        }

        if(carry == 1) sb.append(carry);

        return sb.reverse().toString();

    }

    private int getSum(int ca, int cb){
        int sum = carry + ca + cb;
        carry = sum/2;
        return sum%2;
    }
}