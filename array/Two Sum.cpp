//https://leetcode.com/problems/two-sum/
//Two Sum


    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> check;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(check.find(target-nums[i])!=check.end()){
                return {check[target-nums[i]],i};
            }
            check[nums[i]]=i;
        }
        return {};
    }
