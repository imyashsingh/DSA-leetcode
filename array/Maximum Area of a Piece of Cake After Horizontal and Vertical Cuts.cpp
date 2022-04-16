// https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/
// Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts



class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        sort(verticalCuts.begin(),verticalCuts.end());
        sort(horizontalCuts.begin(),horizontalCuts.end());
        int n=horizontalCuts.size(),m=verticalCuts.size(),area=0,mod=1e9+7,mh=0,mw=0;
        for(int i=1;i<n;i++)
            mh=max(mh,horizontalCuts[i]-horizontalCuts[i-1]);
        for(int i=1;i<m;i++)
            mw=max(mw,verticalCuts[i]-verticalCuts[i-1]);
        area=((long)mh*mw)%mod;
        return area;
    }
};
