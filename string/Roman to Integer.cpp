// https://leetcode.com/problems/roman-to-integer/
// Roman to Integer



class Solution {
public:
    
    int value(char c){
        if(c=='I')
            return 1;
        else if(c=='V')
            return 5;
        else if(c=='X')
            return 10;
        else if(c=='L')
            return 50;
        else if(c=='C')
            return 100;
        else if(c=='D')
            return 500;
        else
            return 1000;
    }
    
    int romanToInt(string s) {
        int n=s.size(),num=0;
        char hig=s[n-1];
        for(int i=n-1;i>=0;i--){
            if(value(s[i]) < value(hig)){
                num-=value(s[i]);
            }
            else{
                hig=s[i];
                num+=value(s[i]);
            }
        }
        return num;
    }
};
