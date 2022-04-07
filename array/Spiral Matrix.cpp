//https://leetcode.com/problems/spiral-matrix/
//Spiral Matrix


    bool check(int row,int col,int mrow,int mcol){
        return (row<=mrow && col<=mcol);
    }
    
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int mrow=matrix.size()-1,mcol=matrix[0].size()-1,i=0,row=0,col=0;
        vector<int> ans;
        while(check(row,col,mrow,mcol)){
            i=col;
            for(;i<=mcol;i++){
                ans.push_back(matrix[row][i]);
            }
            row++;
            if(!check(row,col,mrow,mcol))
                break;
            i=row;
            for(;i<=mrow;i++)
                ans.push_back(matrix[i][mcol]);
            mcol--;
            if(!check(row,col,mrow,mcol))
                break;
            i=mcol;
            for(;i>=col;i--)
                ans.push_back(matrix[mrow][i]);
            mrow--;
            if(!check(row,col,mrow,mcol))
                break;
            i=mrow;
            for(;i>=row;i--)
                ans.push_back(matrix[i][col]);
            col++;
        }
        return ans;
    }
