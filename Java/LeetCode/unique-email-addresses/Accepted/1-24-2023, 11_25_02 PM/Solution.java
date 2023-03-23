// https://leetcode.com/problems/unique-email-addresses

class Solution {
    public int numUniqueEmails(String[] emails) {
        
        Set<String> set = new HashSet<>();

        for(int i=0;i<emails.length;i++){

            String tmp = emails[i];
            String part1 = tmp.substring(0,tmp.indexOf('@'));

            System.out.println(part1);
            
            part1 = part1.replace(".","");
            int ind = part1.indexOf('+');
            System.out.println(part1);
            if(ind != -1){
                part1 = part1.substring(0,ind);
            }

            System.out.println(part1+tmp.substring(tmp.indexOf('@')));
            set.add(part1+tmp.substring(tmp.indexOf('@')));
        }

        return set.size();

    }
}