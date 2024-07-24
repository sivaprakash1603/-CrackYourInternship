class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int profit=0,minp=prices[0];
       for(int i:prices){
        if(i-minp>0){
            profit+=i-minp;
            minp=i;
        }
        else{
            minp=min(minp,i);
        }
       }
       return profit;
    }
};
