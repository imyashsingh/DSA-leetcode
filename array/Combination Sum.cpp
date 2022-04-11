//https://leetcode.com/problems/combination-sum/
// Combination Sum



class Solution {
public:
    void rec(vector<int>& cand,int i,int target,vector<vector<int>>& ans,vector<int> arr,int sum){
        if(i>=cand.size())
            return;
        if(sum+cand[i]==target){
            arr.push_back(cand[i]);
            ans.push_back(arr);
        }
        else if(sum+cand[i]<target){
            rec(cand,i+1,target,ans,arr,sum);
            arr.push_back(cand[i]);
            sum+=cand[i];
            rec(cand,i,target,ans,arr,sum);
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& cand, int target) {
        sort(cand.begin(),cand.end());
        vector<vector<int>> ans;
        vector<int> arr;
        rec(cand,0,target,ans,arr,0);
        return ans;
    }
};
