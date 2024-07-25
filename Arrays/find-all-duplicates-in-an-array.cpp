class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i:nums){
            m[i]++;
            if(m[i]==2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
