//https://leetcode.com/problems/pascals-triangle/
//Pascal's Triangle


    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tri;
        for(int i=1;i<=numRows;i++){
            vector<int> row(i);
            row[0]=1;
            row[i-1]=1;
            for(int j=1;j<i-1;j++){
                row[j]=tri[i-2][j-1]+tri[i-2][j];
            }
            tri.push_back(row);
        }
        return tri;
    }
