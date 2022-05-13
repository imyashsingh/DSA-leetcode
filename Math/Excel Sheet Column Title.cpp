// https://leetcode.com/problems/excel-sheet-column-title/
// Excel Sheet Column Title




class Solution {
public:
    string convertToTitle(int cn) {
        string s="";
        while(cn>0){
            cn--;
            s=char('A'+cn%26 )+ s;
            cn/=26;
        }
        return s;
    }
};
