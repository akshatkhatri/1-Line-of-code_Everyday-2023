class Solution {
public:
     int totalMoney(int n) {
        int start_money = 1; 
        int count = 0; 
        int total_money = 0;

        for (int i = 1; i <= n; ++i) {
            total_money = total_money+ start_money + count;
            count++;

            if (i % 7 == 0) {
                count = 0; 
                start_money++; 
            }
        }

        return total_money;
    }
};
