// https://leetcode.com/problems/sort-the-students-by-their-kth-score

class Solution {
    
public:    
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        map<int,vector<int>> map;
        
        int n = score.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            map[score[i][k]] = score[i];
            v.push_back(score[i][k]);
        }
        sort(v.begin(),v.end());
        for(int i=n-1;i>=0;i--){
            score[n-1-i] = map[v[i]];
        }
        return score;
    }
};