// https://leetcode.com/problems/generate-parentheses/
// Generate Parentheses



class Solution {
public:
    
    void backt(int n,int open,int close,string s,vector<string> &para){
        if(open < close || open>n)
            return;
        if(close == n){
            para.push_back(s);
            return;
        }
        backt(n,open+1,close,s+"(",para);
        backt(n,open,close+1,s+")",para);
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> para;
        backt(n,0,0,"",para);
        return para;
    }
};
