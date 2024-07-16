class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=0;
        for(int i=0;i<m+n;++i){
            if (k < n && (i >= m + k || nums1[i] > nums2[k])){
                nums1.emplace(nums1.begin()+i,nums2[k]);
                ++k;
            }
        }
        nums1.resize(m+n);
    }
};
