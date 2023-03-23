// https://leetcode.com/problems/latest-time-by-replacing-hidden-digits

class Solution {
    public String maximumTime(String time) {
        // 23:59

        char h0 = time.charAt(0),
             h1 = time.charAt(1),
             md = time.charAt(2),
             m0 = time.charAt(3),
             m1 = time.charAt(4);
        
        StringBuilder sb = new StringBuilder();
        if(h0 == '?' && h1 == '?')
            sb.append("23");
        else if(h0 == '?'){
            if(h1 <= '3')
                sb.append(2).append(h1);
            else
                sb.append(1).append(h1);
            
        }
        else if( h1 == '?'){
            if( h0 == '2')
                sb.append("23");
            else
                sb.append(h0).append('9');
        }
        else
            sb.append(h0).append(h1);
        
        sb.append(':');

        sb.append( 
            m0 == '?' ? '5' :m0
        );
        
        sb.append( 
            m1 == '?' ? '9' :m1
        );

        return sb.toString();


    }
}