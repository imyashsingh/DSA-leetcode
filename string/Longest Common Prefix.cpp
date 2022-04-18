//https://leetcode.com/problems/longest-common-prefix/
// Longest Common Prefix



class Solution {
public:

    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0)
            return "";
        int m=strs[0].size();
        for(int i=0;i<n;i++)
        {
            m=min(m,int(strs[i].size()));
        }
        string s="";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(strs[j][i]!=strs[j+1][i])
                {
                    return s;
                }
            }
            s+=strs[0][i];
        }
        return s;
    }
};
