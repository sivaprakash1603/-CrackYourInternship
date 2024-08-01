class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    vector<int>temp(nums.begin(),nums.end());
	    int c=0;
	    sort(temp.begin(),temp.end());
	    unordered_map<int,int>mp;
	    for(int i=0;i<nums.size();++i){
	        mp[nums[i]]=i;
	    }
	    for(int i=0;i<temp.size();i++){
	        if(temp[i]!=nums[i]){
	            int in=mp[temp[i]];
	            mp[nums[i]]=in;
	            mp[nums[in]]=i;
	            swap(nums[i],nums[in]);
	            ++c;
	        }
	    }
	    return c;
	}
};
