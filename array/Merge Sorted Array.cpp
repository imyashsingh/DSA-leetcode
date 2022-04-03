//https://leetcode.com/problems/merge-sorted-array/
//Merge Sorted Array



    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len=n+m-1;
        n--;
        m--;
        while(n>=0 && m>=0){
            if(nums1[m] > nums2[n]){
                nums1[len]=nums1[m];
                m--;
            }
            else{
                nums1[len]=nums2[n];
                n--;
            }
            len--;
        }
        while(n>=0){
            nums1[len]=nums2[n];
            len--;
            n--;
        }
        while(m>=0){
            nums1[len]=nums1[m];
            len--;
            m--;
        }
    }
