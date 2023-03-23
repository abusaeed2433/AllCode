// https://leetcode.com/problems/roman-to-integer

class Solution {
public:
    int romanToInt(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        map<char,int> mp;
        mp['I']=1;
        mp['V'] = 5; mp['X'] = 10;
        mp['L'] = 50; mp['C'] = 100;
        mp['D'] = 500; mp['M'] = 1000;
        
        bool isTaken = false;
        int ans = 0, n = s.size();
        char ch,ch2;
        
        for(int i=0;i<n-1;){
            ch = s[i];
            ch2 = s[i+1];
            if( mp[ch] < mp[ch2] ){
                ans += mp[ch2]-mp[ch];
                i+=2;
                if(i==n) isTaken = true;
            }
            else{
                i++;
                ans += mp[ch];
            }
            
        }
        if(!isTaken) ans+=mp[s[s.size()-1]];
        return ans;
    }
};