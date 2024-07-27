class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>sumtocount;
        int count = 0,sum = 0;
        sumtocount[sum] = 1;
        for(int enpoint = 0; enpoint < nums.size(); enpoint++)
        {
            sum = sum+nums[enpoint];
            if(sumtocount.find(sum - k)!= sumtocount.end())
            {
                count = count+sumtocount[sum-k];
            }
            sumtocount[sum]++;
        }
        return count;
    }
};
