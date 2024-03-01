1287. Element Appearing More Than 25% In Sorted Array

#include <vector>
#include <iostream>

class Solution {
public:
    int findSpecialInteger(std::vector<int>& arr) {
        int count = 1;  
        int element = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == element) {
                count++;
            }
            if (count > (arr.size() / 4)) {
                return element;
            }
            else if (arr[i] != element) {
                element = arr[i];
                count = 1;  
            }
        }
        return element;  
    }
};
