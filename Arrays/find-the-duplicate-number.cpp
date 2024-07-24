class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    vector<int> a(nums.size(),0);
    for(int i=0;i<nums.size();i++){
    if((++a[nums[i]])>1) return nums[i];
    }
    return -1;    
    }
};
