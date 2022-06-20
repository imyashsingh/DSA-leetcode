// https://leetcode.com/problems/task-scheduler/
// 621. Task Scheduler



class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> mp;
        int mxcnt=0,repmax=0;
        for(auto i : tasks){
            mp[i]++;
            mxcnt=max(mxcnt,mp[i]);
        }
        for(auto i : mp){
            if(i.second == mxcnt){
                repmax++;
            }
        }
        int s=tasks.size();
        return max(s,(mxcnt-1)*(n+1)+repmax);
    }
};
