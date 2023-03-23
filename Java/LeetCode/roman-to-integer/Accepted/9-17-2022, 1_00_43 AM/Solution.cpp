// https://leetcode.com/problems/roman-to-integer

class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mp;
        mp['I']=1;
        mp['V'] = 5; mp['X'] = 10;
        mp['L'] = 50; mp['C'] = 100;
        mp['D'] = 500; mp['M'] = 1000;
        
        bool isTaken = false;
        int ans = 0;
        for(int i=0;i<s.size()-1;){
            char ch = s[i];
            char ch2 = s[i+1];
            if( mp[ch] < mp[ch2] ){
                ans += mp[ch2]-mp[ch];
                i+=2;
                if(i==s.size()) isTaken = true;
            }
            else{
                ans += mp[ch];
                i++;
            }
        }
        if(!isTaken) ans+=mp[s[s.size()-1]];
        return ans;
    }
};