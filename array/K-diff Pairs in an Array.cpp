// https://leetcode.com/problems/k-diff-pairs-in-an-array/
// K-diff Pairs in an Array



class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,j=1,pair=0,n=nums.size();
        while(j<n){
            if(i==j || nums[j]-nums[i] < k)
                j++;
            else if(nums[j]-nums[i] == k){
                pair++;
                while(j<n-1 && nums[j]==nums[j+1]) j++;
                while(i<n-1 && nums[i]==nums[i+1]) i++;
                i++;
                j++;
            }
            else 
                i++;
                
        }
        return pair;
    }
};
