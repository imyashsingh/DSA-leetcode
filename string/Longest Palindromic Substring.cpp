// https://leetcode.com/problems/longest-palindromic-substring/
// Longest Palindromic Substring



class Solution {
public:
    
    void longstr(string &s,int st,int end,int n,int &len,int &start){
        while(st>=0 && end<n){
            if(s[st]!=s[end])
                break;
            st--;
            end++;
        }
        if((end-st-1) > len){
            len=end-st-1;
            start=st+1;
        }
        
    }
    
    string longestPalindrome(string s) {
        int len=1,n=s.size(),start=0;
        for(int i=0;i<n-1;i++){
            longstr(s,i,i,n,len,start);
            longstr(s,i,i+1,n,len,start);
        }
        return s.substr(start,len);
    }
};
