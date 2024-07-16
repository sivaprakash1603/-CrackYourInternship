class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int t1=-1000,t2=-1000,t3=-1000,b1=1000,b2=1000;
        for(int i=0;i<nums.size();++i){
            if(nums[i]>=t1){
                t3=t2;
                t2=t1;
                t1=nums[i];
            }
            else if(nums[i]>=t2){
                t3=t2;
                t2=nums[i];
            }
            else if(nums[i]>=t3){
                t3=nums[i];
            }
            if(nums[i]<=b1){
                b2=b1;
                b1=nums[i];
            }
            else if(nums[i]<=b2){
                b2=nums[i];
            }
        }
        return max(t1*t2*t3,b1*b2*t1);
    }
};
