// https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/
// Minimum Remove to Make Valid Parentheses



class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int count=0,n=s.size();
        for(auto &i : s){
            if(i=='(')
                count++;
            else if(i==')'){
                if(count==0)
                    i='#';  
                else
                    count--;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]== '#'){
                s=s.substr(0,i)+s.substr(i+1);
            }
            if(s[i]=='(' && count!=0){
                s=s.substr(0,i)+s.substr(i+1);
                count--;
            }
          
        }
        return s;
    }
};
