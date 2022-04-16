// https://leetcode.com/problems/find-all-duplicates-in-an-array/
// Find All Duplicates in an Array




class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> dup;
        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])-1]<0)
                dup.push_back(abs(nums[i]));
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
        return dup;
    }
};
