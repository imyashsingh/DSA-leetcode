//https://leetcode.com/problems/find-pivot-index/
//Find Pivot Index


    int pivotIndex(vector<int>& nums) {
        int sum=0,n=nums.size();
        for(int &i:nums)
            sum+=i;
        int left=0;
        for(int i=0;i<n;i++){
            if(left==sum-left-nums[i])
                return i;
            left+=nums[i];
        }
        return-1;
    }
