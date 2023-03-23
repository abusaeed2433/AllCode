// https://leetcode.com/problems/zigzag-conversion

class Solution {
    int row;
    int gap;

    public String convert(String s, int numRows) {

        row = numRows;
        int gap = (row-1) * 2;

        if(gap <= 0) return s;
        
        StringBuilder sb = new StringBuilder();

        for(int i=0; i < numRows; i++){
            if(i < s.length())
                sb.append(s.charAt(i));

            int j = i + gap;
            while(j - i - i < s.length()){                
                if( i != 0 && i != numRows-1)                    
                    sb.append(s.charAt(j-i-i));
                
                if(j < s.length())
                    sb.append(s.charAt(j));

                j += gap;
            }

        }

        return sb.toString();
    }


}