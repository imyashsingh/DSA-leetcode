// https://leetcode.com/problems/integer-break/
// Integer Break


class Solution {
public:
    int integerBreak(int n) {
        if(n==2)
            return 1;
        if(n==3)
            return 2;
        int three=n/3,rem;
        rem=n%3;
        if(rem==1){
            rem=4;
            three--;
        }
        else if(rem==0)
            rem=1;
        return pow(3,three)*rem;
        
    }
};
