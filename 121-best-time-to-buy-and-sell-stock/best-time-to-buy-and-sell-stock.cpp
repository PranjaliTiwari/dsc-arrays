class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int least = prices[0];
        int high = 0;

        for(int i = 1; i < prices.size(); i++) {

            if(prices[i] < least) {
                least = prices[i];
            }

            int profit = prices[i] - least;

            if(profit > high) {
                high = profit;
            }
        }

        return high;
    }
};