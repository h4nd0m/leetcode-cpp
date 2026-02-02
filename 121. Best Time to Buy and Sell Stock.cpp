class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int minBuy = prices[0];
        for (int& s : prices) {
            maxP = max(maxP, s - minBuy);
            minBuy = min(minBuy, s);
        }
        return maxP;
    }
};
