class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,n=prices.size(),minp=prices[0];
        for(int i=0;i<n;++i){
            profit=max(profit,prices[i]-minp);
            minp=min(prices[i],minp);
        }
        return profit;;
    }
};
