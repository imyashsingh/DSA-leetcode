// https://leetcode.com/problems/non-overlapping-intervals/
// Non-overlapping Intervals



class Solution {
public:
    static bool comp(vector<int>&v1,vector<int>&v2){
        return v1[1]<v2[1];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),comp);
        int cnt=0,check=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<check)
                cnt++;
            else
                check=intervals[i][1];
        }
        return cnt;
    }
};