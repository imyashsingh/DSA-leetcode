// https://leetcode.com/problems/word-search/
// Word Search


class Solution {
public:
    bool check(vector<vector<char>>& board, string& word,int i,int j,int ind){
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]=='*')
            return false;
        bool res=false;
        char temp=board[i][j];
        if(board[i][j] == word[ind]){
            ind++;
            if(ind == word.size()){
                return true; 
            }
            board[i][j]='*';
            res=check(board,word,i+1,j,ind) ||  check(board,word,i-1,j,ind) || check(board,word,i,j+1,ind) || check(board,word,i,j-1,ind);
            board[i][j]=temp;
        }
        return res;
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size();
        bool ans=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                if(check(board,word,i,j,0))
                    return true;
            }
        return ans;
    }
};
