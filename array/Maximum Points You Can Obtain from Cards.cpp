// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
// Maximum Points You Can Obtain from Cards



class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans=0,n=cardPoints.size();
        for(int i=0;i<k;i++)
            ans+=cardPoints[i];
        int temp=ans,ind=k-1;
        for(int i=n-1;i>=n-k;i--){
            temp-=cardPoints[ind--];
            temp+=cardPoints[i];
            ans=max(temp,ans);
        }
        return ans;
    }
};
