class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int overall_profit  = 0;
        int profit = 0;

        for(int i =0; i<prices.size(); i++){
            if(prices[i] < buy){
                buy = prices[i];
            }

            profit = prices[i]-buy;

            if(overall_profit < profit){
                overall_profit = profit;
            }
        }
        return overall_profit;
        
    }
};