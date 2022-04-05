//https://leetcode.com/problems/product-of-array-except-self/
Product of Array Except Self

    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1,n=nums.size();
        if(n==1)
            return nums;
        vector<int> ans(n,1);
        ans[1]=nums[0];
        for(int i=2;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        int right=nums[n-1];
        for(int i=n-2;i>=0;i--){
            ans[i]*=right;
            right*=nums[i];
        }
        return ans;
    }
