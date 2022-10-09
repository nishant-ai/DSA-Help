class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     
        int i = m-1;
        int j =n-1;
        int total = n+m-1;
        
        while (j >=0){
            if (i>=0 && nums1[i] > nums2[j]){
                nums1[total] = nums1[i];
                total -=1;
                i -=1;
            }
            else{
                nums1[total] = nums2[j];
                total -=1;
                j -=1;
            }
        }
        
    }
};