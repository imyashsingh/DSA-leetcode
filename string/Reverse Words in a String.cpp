// https://leetcode.com/problems/reverse-words-in-a-string/
// Reverse Words in a String



class Solution {
public:
    void blank(string &s,int &i){
        while(s[i]==' ')
            i--;
    }
    
    string reverseWords(string s) {
        int n=s.size();
        string word="",str="";
        int i=n-1,st=0;
        while(s[st]==' ')
            st++;
        blank(s,i);
        for(;i>=st;i--){
            if(s[i]!=' ')
                word=s[i]+word;
            else{
                str+=word;
                str+=" ";
                blank(s,i);
                i++;
                word="";
            }
        }
        str+=word;
        return str;
        
    }
};
