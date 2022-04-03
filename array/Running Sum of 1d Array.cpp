//https://leetcode.com/problems/running-sum-of-1d-array/
//Running Sum of 1d Array


    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++){
            ans.push_back(ans[i-1]+nums[i]);
        }
        return ans;
    }
