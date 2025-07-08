class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int cost;
        int min_profit=prices[0];
        for(int i=1;i<prices.size();i++){
            cost=prices[i]-min_profit;
            profit=max(cost,profit);
            min_profit=min(prices[i],min_profit);
        }
        return profit;
    }
};