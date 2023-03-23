// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {        
     
    
    int n = nums.size();

    map<int,pair<int,int>> mp;


    for(int i=0; i<n; i++)
    {

        pair<int,int>& pr = mp[ nums[i] ];
        if(pr.first == 0){
            pr.first = i+1;
        }
        else{
            pr.second = i+1;
        }
    }

    vector<int> ans(2);

    for(int j = 0; j<n; j++)
    {
        int i = nums[j];

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