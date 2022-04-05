//https://leetcode.com/problems/3sum/
//3Sum



    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            if(nums[i]>0)                  // never sum up to zero
                break;
            int l=i+1,r=n-1;
            int sum=nums[i]+nums[l]+nums[r];
            if(i>0 && nums[i]==nums[i-1])                  //To remove duplicate
                continue;
            while(l<r){
                sum=nums[i]+nums[l]+nums[r];
                if(sum==0){
                    ans.push_back({nums[i],nums[l],nums[r]});
                    int lc=nums[l],rc=nums[r];                //To remove duplicate
                    while(l<r && lc==nums[l]){
                        l++;
                    }
                    while(l<r && rc==nums[r]){
                        r--;
                    }
                }
                else if(sum<0){
                    l++;
                }
                else{
                    r--;
                }
                
            }
        }
        return ans;
    }
