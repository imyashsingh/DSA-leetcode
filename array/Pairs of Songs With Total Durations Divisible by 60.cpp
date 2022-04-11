// https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/
// Pairs of Songs With Total Durations Divisible by 60



class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int mp[60]={0};
        int ans=0;
        for(int i : time){
            int temp=i%60;
            ans+=mp[(60-temp)%60];
            mp[temp]++;
        }
        return ans;
    }
};
