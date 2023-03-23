// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {        
     
    
    int n = nums.size();

    map<int,pair<int,int>> mp;

    int mn = INT_MAX, mx = INT_MIN;

    for(int i=0; i<n; i++)
    {
        mx = max(mx,nums[i]);
        mn = min(mn,nums[i]);
        pair<int,int>& pr = mp[ nums[i] ];
        if(pr.first == 0){
            pr.first = i+1;
        }
        else{
            pr.second = i+1;
        }
    }

    vector<int> ans(2);

    for(int i = mn; i<=mx; i++)
    {

        int a = mp[i].first;
        int b = mp[target-i].first;

        if( a==0 || b==0 ) continue;

        if( i == target-i )
        {
            if(mp[i].second == 0 ) continue;
            ans[0] = mp[i].first-1;
            ans[1] = mp[i].second-1;
            return ans;
        }
        else
        {
            ans[0] = mp[i].first -1;
            ans[1] = mp[target-i].first-1;
            return ans;
        }

    }

    return ans;
        
    }
};