// https://leetcode.com/problems/gas-station/
// 134. Gas Station


class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size(),mincost=gas[0]-cost[0],ind=0,temp=0;
        for(int i=0;i<n;i++){
            temp+=gas[0]-cost[0];
            if(temp<mincost){
                mincost=temp;
                ind=(i+1)%n;
            }
        }
        return ind;
    }
};
