//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//Remove Duplicates from Sorted Array


    int removeDuplicates(vector<int>& nums) {
        int cnt=1,n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                nums[cnt]=nums[i];
                cnt++;
            }
        }
        return cnt;
    }
