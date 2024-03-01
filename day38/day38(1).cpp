class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minimum=INT_MAX;
        int second_minimum=INT_MAX;

        for(int i=0;i<prices.size();i++){
            if(prices[i]<minimum){

                second_minimum=minimum;
                minimum=prices[i];

            }
            else if(prices[i]<second_minimum){
                second_minimum=prices[i];
            }
        } 
        if(minimum+second_minimum>money){
            return money;
        }
        else{
            return money-(minimum+second_minimum);
        }
        // sort(prices.begin(),prices.end());
        // if(prices[0]+prices[1]>money){
        //     return money;
        // }
        // else{
        //     return money-(prices[0]+prices[1]);
        // }
    }
};
/*    Initialization of Variables:
    The method initializes two variables, minimum and second_minimum, to INT_MAX (maximum possible integer value). These variables will be used to track the two minimum prices encountered in the vector of chocolate prices.

    Iterating Through Chocolate Prices:
    The algorithm iterates through the vector of chocolate prices. For each price encountered (prices[i]), it checks whether it is less than the current minimum price. If so, it updates both the minimum and second_minimum prices accordingly.

    Calculating Remaining Money:
    After iterating through the prices, the algorithm checks whether the sum of the two minimum prices (minimum and second_minimum) is greater than the initial amount of money (money). If true, it means that the money is not sufficient to buy two chocolates, and the original amount of money is returned.

    Returning the Result:
    If the sum of the two minimum prices is less than or equal to the initial amount of money, the algorithm calculates and returns the remaining money after purchasing the two chocolates. This is achieved by subtracting the sum of the two minimum prices from the initial amount of money.

    Alternative Approach (commented out):
    There is a commented-out section in the code that suggests an alternative approach using the sort function to sort the vector of prices. The two minimum prices are then selected from the sorted vector for comparison. However, this approach is not used in the final code.

Overall, the algorithm efficiently identifies the two minimum prices in the given vector, checks if they can be purchased within the provided budget, and returns the remaining amount of money after the hypothetical chocolate purchase.
*/
