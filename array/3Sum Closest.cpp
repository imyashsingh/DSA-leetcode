// https://leetcode.com/problems/3sum-closest/
// 3Sum Closest



class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size(),mini=INT_MAX,close=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int j=i+1,k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(mini>abs(target-sum)){
                    mini=abs(target-sum);
                    close=sum;
                }
                if(sum<target)
                    j++;
                else
                    k--;
            }
        }
        return close;
    }
};
