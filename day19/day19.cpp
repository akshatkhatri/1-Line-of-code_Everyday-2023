class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int i = 1;
        int prev = prices[0];

        while (i < prices.size()) {

            if (prices[i] > prev) {
                
                while (i < prices.size() && prices[i] > prices[i-1]) {
                    i++;
                } 
            }
            ans += max(0, prices[i-1] - prev);
            prev = prices[i];
            i++;
        }
        return ans;
    }
};
