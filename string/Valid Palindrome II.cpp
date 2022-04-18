// https://leetcode.com/problems/valid-palindrome-ii/
// Valid Palindrome II




class Solution {
public:
    bool check(string& s,int st,int end,int del){
        if(del>1)
            return false;
        if(st>end)
            return true;
        if(s[st]==s[end])
           return check(s,st+1,end-1,del);
        else
            return (check(s,st+1,end,del+1) || check(s,st,end-1,del+1)); 
    }
    
    bool validPalindrome(string s) {
        int st=0,end=s.size()-1;
        return check(s,st,end,0);
    }
};



