// https://leetcode.com/problems/happy-number/
// Happy Number




class Solution {
public:
    int sum(int n){
        int x=0;
        while(n){
            int t=n%10;
            x+=t*t;
            n/=10;
        }
        return x;
    }
    
    bool isHappy(int n) {
        int slow = n;
        int fast = sum(n);
        while(fast!=1 && fast!=slow){
            slow=sum(slow);
            fast=sum(sum(fast));
        }
        return fast == 1;
    }
};
