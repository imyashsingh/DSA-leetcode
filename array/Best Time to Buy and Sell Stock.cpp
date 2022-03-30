//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//Best Time to Buy and Sell Stock


    int maxProfit(vector<int>& prices) {
        int n=prices.size(),pro=0,mini=prices[0];
        for(int i=1;i<n;i++){
            mini=min(mini,prices[i]);
            pro=max(pro,prices[i]-mini);
        }
        return pro;
    }
