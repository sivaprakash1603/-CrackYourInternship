class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,n=nums.size();
        map<int,int> temp;
        for(i=0;i<n;++i){
            if(temp.find(target-nums[i])!=temp.end()){
                return {temp[target-nums[i]],i};
            }
            temp[nums[i]]=i;
        }
        return {};
    }
};
