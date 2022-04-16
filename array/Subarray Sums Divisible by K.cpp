// https://leetcode.com/problems/subarray-sums-divisible-by-k/
// Subarray Sums Divisible by K




class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int> mp;
        int sum=0,cnt=0;
        mp[0]++;
        for(int &i : nums){
            sum+=i;
            sum%=k;
            if(sum<0)
                sum+=k;
            if(mp.find(sum)!=mp.end())
                cnt+=mp[sum];
            mp[sum]++;
        }
        return cnt;
    }
};
