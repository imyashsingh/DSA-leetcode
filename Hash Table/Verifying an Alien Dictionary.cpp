// Verifying an Alien Dictionary
// https://leetcode.com/problems/verifying-an-alien-dictionary/


class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int pos[26]={0},n=order.size(),check;
        for(int i=0;i<n;i++)
            pos[order[i]-'a']=i;
        n=words.size();
        for(int i=0;i<n-1;i++){
            int j=0;
            while(j < words[i].size() && j < words[i+1].size()){
                if(pos[words[i][j] - 'a'] > pos[words[i+1][j] - 'a'])
                    return false;
                if(pos[words[i][j]-'a'] < pos[words[i+1][j]-'a'])
                    break;
                j++;
            }
            if(words[i].size() > words[i+1].size() && pos[words[i][ words[i+1].size()-1]-'a'] >= pos[words[i+1][ words[i+1].size()-1]-'a'])
                return false;
        }
        return true;
    }
};