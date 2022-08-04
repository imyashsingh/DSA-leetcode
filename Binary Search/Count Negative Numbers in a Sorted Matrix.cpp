

// Count Negative Numbers in a Sorted Matrix
// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/




class Solution {
public:
    
    int bsearch(vector<int> arr){
        int s=0,e=arr.size()-1,mid,n=arr.size();
        while(s<e){
            mid=s+(e-s)/2;
            if(arr[mid] >= 0)
                s=mid+1;
            else
                e=mid;
        }
        if(arr[s] >=0)
            s++;
         return n-s;
    }
    
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size(),cnt=0 ;
        for(int i=0;i<n;i++){
            cnt+=bsearch(grid[i]);
        }
        return cnt;
    }
};