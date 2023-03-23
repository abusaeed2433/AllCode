// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {        
        
    int n = nums.size();

    vector<vector<int>> v(target+1, vector<int>(2,-1));

    for(int i=0; i<n; i++)
    {
        if(nums[i] > target) continue;

        int j = nums[i];
        if( v[j][0]==-1)  {
            v[j][0] = i;
        }
        else
        {
            v[j][1] = i;
        }
    }


    vector<int> ans(2);
    int mx = target/2;

    for(int i=0; i<=mx; i++)
    {

        int a = v[i][0];
        int b = v[target-i][0];

        if( a==-1 || b==-1 ) continue;

        if( i == target-i )
        {
            if(v[i][1] == -1) continue;
            ans[0] = v[i][0];
            ans[1] = v[i][1];
            return ans;
        }
        else
        {
            ans[0] = v[i][0];
            ans[1] = v[target-i][0];
            return ans;
        }

    }

    return ans;
        
    }
};