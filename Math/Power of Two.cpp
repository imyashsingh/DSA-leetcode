// https://leetcode.com/problems/power-of-two/
// Power of Two



class Solution {
public:
    bool isPowerOfTwo(long n) {
        return  n>0 && ((n-1)&n) == 0;
    }
};
