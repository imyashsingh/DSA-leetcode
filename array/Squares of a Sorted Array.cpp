//https://leetcode.com/problems/squares-of-a-sorted-array/
//Squares of a Sorted Array


    vector<int> sortedSquares(vector<int>& nums) {
        int mid=0,n=nums.size();
        vector<int> ans(n);
        int neg=0,pos=n-1,i=n-1;
        while(neg<=pos){
            if((nums[neg]*-1) > nums[pos]){
                ans[i]=nums[neg]*nums[neg];
                neg++;
            }
            else{
                ans[i]=nums[pos]*nums[pos];
                pos--;
            }
            i--;
        }
        return ans;
    }
