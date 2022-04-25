// https://leetcode.com/problems/implement-strstr/
// Implement strStr()



class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.size(),n=needle.size();
        for(int i=0;i<=h-n;i++){
            int k=i,j=0;
            while(haystack[k] == needle[j] && j<n){
                k++;
                j++;
            }
            if(j==n)
                return i;
        }
        return -1;
    }
};
