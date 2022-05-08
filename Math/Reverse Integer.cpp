// https://leetcode.com/problems/reverse-integer/
// Reverse Integer



class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x){
            int temp=x%10;
            x/=10;
            if(ans>=pow(2,31)/10 || ans<=-pow(2,31)/10)
                return 0;
            ans=ans*10+temp;
        }
        return ans;
    }
};
