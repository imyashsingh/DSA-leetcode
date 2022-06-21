// https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
// 1578. Minimum Time to Make Rope Colorful



class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int mint=0,currt=neededTime[0],n=colors.size(),flag=0,sum=neededTime[0];
        for(int i=1;i<n;i++){
            if(colors[i]==colors[i-1]){
                flag=1;
                currt=max(currt,neededTime[i]);
                sum+=neededTime[i];
            }
            else{
                if(flag==0){
                    sum=0;
                    currt=0;
                }
                sum-=currt;
                mint+=sum;
                currt=neededTime[i];
                sum=currt;
                flag=0;
            }
        }
        if(flag==1)
            mint+=sum-currt;
        return mint;
        
    }
};
