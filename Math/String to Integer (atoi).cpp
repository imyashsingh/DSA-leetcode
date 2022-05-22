// https://leetcode.com/problems/string-to-integer-atoi/
// String to Integer (atoi)




class Solution {
public:
    int myAtoi(string s) {
        long long result=0;
        int sign=1,n=s.size(),i=0;
        while(i<n && s[i]==' '){
            i++;
        }
        if(i==n)
            return result;
        if(s[i]=='-' || s[i]=='+'){
            sign = s[i] == '-'? -1:1;
            i++;
        }
        while(s[i]>='0' && s[i]<='9' && i<n){
            result = result*10 + (s[i] - '0');
            if(result*sign<=INT_MIN)
                return INT_MIN;
            if(result*sign>=INT_MAX)
                return INT_MAX;
            i++;
        }
        return sign*result;
    }
};
