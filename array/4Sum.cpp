// https://leetcode.com/problems/4sum/
// 4Sum



class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i=0,j=1,k=2,l=3,n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1]) 
                continue;
            for(j=i+1;j<n-2;j++){
                if(j!=i+1 && nums[j]==nums[j-1]) 
                    continue;
                k=j+1;
                l=n-1;
                int temp=target-nums[i]-nums[j];
                while(k<l){
                    int sum=nums[k]+nums[l];
                    if(sum==temp){
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1]){
                            k++;
                        }
                        while(k<l && nums[l]==nums[l+1]){
                            l--;
                        }
                    }
                    else if(sum<temp)
                        k++;
                    else
                        l--;
                }
            }
            
        }
        return ans;
    }
};
