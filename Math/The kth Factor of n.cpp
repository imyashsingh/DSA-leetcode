//https://leetcode.com/problems/the-kth-factor-of-n/
// 1492. The kth Factor of n




class Solution {
public:
    int kthFactor(int n, int k) {
        int i=1;
        for(;i*i<=n;i++)
            if(n%i==0 && --k==0)
                return i;
        i--;
        if(i*i==n)
            i--;
        for(;i>=1;i--)
            if(n%i==0 && --k==0)
                return n/i;
        return -1;
    }
};
