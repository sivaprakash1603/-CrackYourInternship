class NumArray {
public:
   vector<int>num;
    NumArray(vector<int>& nums) {
    num.resize(nums.size());
    num[0]=nums[0];
    for(int i=1;i<nums.size();i++){
        num[i]=num[i-1]+nums[i];
    }
    }
    
    int sumRange(int left, int right) {
    if(left==0){
        return num[right];
    }
    return num[right]-num[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
