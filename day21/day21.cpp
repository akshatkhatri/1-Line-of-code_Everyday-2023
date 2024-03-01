class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int currRemaining = 0;
        int totalRemaining = 0;
        int start = 0;
        for (int i = 0; i < gas.size(); i ++){
            int remaining = gas[i] - cost[i];
            if (currRemaining < 0){
                start = i;
                currRemaining = remaining;
            }
            else{
                currRemaining += remaining;
            }
            totalRemaining += remaining;
        }//for i
        if (totalRemaining < 0)
            return -1;
        else
            return start;
    }
};
