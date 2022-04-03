//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
//Best Time to Buy and Sell Stock II


    int maxProfit(vector<int>& prices) {
        int sum=0,n=prices.size();
        for(int i=1;i<n;i++){
           if(prices[i]-prices[i-1]>0)
               sum+=prices[i]-prices[i-1];
        }
        return sum;
    }
