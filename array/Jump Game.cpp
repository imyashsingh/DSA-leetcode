// https://leetcode.com/problems/jump-game/
// Jump Game




class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jump=0,maxind=nums[0],mxj=nums[0],n=nums.size();
        for(int i=1;i<n;i++){
            mxj=max(mxj,i+nums[i]);
            if(i==maxind){
                jump++;
                maxind=mxj;
            }
            if(i>maxind)
                return false;
        }
        return true;
    }
};
