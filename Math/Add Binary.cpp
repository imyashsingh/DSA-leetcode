// https://leetcode.com/problems/add-binary/
// Add Binary



class Solution {
public:
    string addBinary(string a, string b) {
        int la=a.size()-1,lb=b.size()-1;
        string ans="";
        char carry='0';
        while(la>=0 || lb>=0){
            int x=0;
            int y=0;
            int z=carry-'0';
            if(la>=0)
                x=a[la]-'0';
            if(lb>=0)
                y=b[lb]-'0';
            if(x+y+z == 3){
                ans='1' + ans;
                carry='1';
            }
            else if(x+y+z == 2){
                ans='0' + ans;
                carry='1';
            }
            else if(x+y+z == 1){
                ans='1' + ans;
                carry='0';
            }
            else{
                ans='0' + ans;
                carry='0';
            }
            la--;
            lb--;
        }
        if(carry == '1')
            ans='1' + ans;
        return ans;
        
    }
};
