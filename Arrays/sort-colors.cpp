class Solution {
public:
    void sortColors(vector<int>& nums) {
       int count[3]={0},k=0;
       for(int num:nums){
        count[num]++;
       }
       for(int i=0;i<3;++i){
        for(int j=0;j<count[i];++j,++k){
            nums[k]=i;
        }
       }
    }
};
