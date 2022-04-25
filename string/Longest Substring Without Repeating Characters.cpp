// https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Longest Substring Without Repeating Characters



class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int> last(256,-1);
        int n=s.size(),st=0,len=1;
        if(n==0)
            return 0;
        for(int i=0;i<n;i++){
            st=max(st,last[s[i]]+1);
            last[s[i]]=i;
            len=max(len,i-st+1);
        }
        return len;
    }
};
