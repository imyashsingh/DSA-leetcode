// https://leetcode.com/problems/add-strings/
// Add Strings


class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.size()-1,n2=num2.size()-1,carry=0;
        string ans="";
        while(n1>=0 || n2>=0){
            int a=0,b=0;
            if(n1>=0)
                a=num1[n1]-'0';
            if(n2>=0)
                b=num2[n2]-'0';
            int add=a+b+carry;
            carry=add/10;
            add=add%10;
            ans=char('0'+add)+ans;
            n2--;
            n1--;
        }
        if(carry)
            ans=char('0'+carry)+ans;
        return ans;
        
    }
};

