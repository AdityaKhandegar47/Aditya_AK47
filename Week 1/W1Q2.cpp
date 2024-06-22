class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l = m+n;
        for(int i = m, j = 0;i<l && j<n;i++,j++){
            nums1[i] = nums2[j];
        }

        for(int i = 0; i < l ;i++){
            for(int j = 0; j < i ;j++){
                if(nums1[j] > nums1[i]) swap(nums1[i],nums1[j]);
            }
        }
    }
    void swap( int &m , int &n){
        int temp = m;
        m = n;
        n = temp;
    }
};