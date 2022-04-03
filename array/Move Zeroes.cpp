//https://leetcode.com/problems/move-zeroes/
//Move Zeroes


    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),st=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[st]=nums[i];
                st++;
            }
        }
        while(st<n){
            nums[st]=0;
            st++;
        }
    }
