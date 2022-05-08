// https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
// Minimum Moves to Equal Array Elements



class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini=nums[0],sum=0;
        for(int i : nums)
            mini=min(mini,i);
        for(int i : nums)
            sum+=i-mini;
        return sum;
    }
};
