//https://leetcode.com/problems/jump-game-ii/
// Jump Game II



class Solution {
public:
    int jump(vector<int>& nums) {
        int maxnum=nums[0],jump=1,maxj=nums[0],n=nums.size(),i;
        if(n==1)
            return 0;
        for( i=1;i<n-1;i++){
            maxj=max(maxj,i+nums[i]);
            if(i==maxnum){
                jump++;
                maxnum=maxj;
                maxj=0;
            }
        }
        return jump;
    }
};
