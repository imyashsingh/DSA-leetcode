// https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/
// 1647. Minimum Deletions to Make Character Frequencies Unique




class Solution {
public:
    int minDeletions(string s) {
        int feq[26]={0};
        for(auto c : s)
            feq[c-'a']++;
        sort(feq,feq+26);
        int cnt=0,maxi=max(0, feq[25] - 1);
        for(int i=24;i>=0 && feq[i] > 0;i--){
            if(maxi < feq[i]){
                cnt+=feq[i]-maxi;
                feq[i]=maxi;
            }
            maxi = max(0, feq[i] - 1);
        }
        return cnt;
    }
};
