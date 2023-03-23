// https://leetcode.com/problems/subdomain-visit-count

class Solution {

    Set<String> list = new HashSet<>();
    HashMap<String,Integer> map = new HashMap<>();

    public List<String> subdomainVisits(String[] cpdomains) {
        
        for(String str : cpdomains){
            process(str);
        }

        List<String> ans = new ArrayList<>();

        for(String s : list){
            ans.add( map.get(s)+" "+s );
        }

        return ans;

    }

    private void process(String s){
        int i = s.indexOf(' ');

        String cnt = s.substring(0,i);
        Integer count = Integer.parseInt(cnt);

        i++;
        while( i < s.length() && i > 0){
            String sd = s.substring(i);
            list.add(sd);

            i = s.indexOf('.',i+1) + 1;

            int val = count;
            if(map.containsKey(sd)){
                val = map.get(sd)+count;
            }
            map.put(sd,val);
        }
        

    }

}