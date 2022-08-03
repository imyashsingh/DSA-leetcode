// Sqrt(x)
// https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        int s=0,e=x;
        long long mid=s+(e-s)/2,ans;
        while(s<=e){
            long long sq=mid*mid;
            if(sq == x )
                return mid;
            if(sq<x){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};