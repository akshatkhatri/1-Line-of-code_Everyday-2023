#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result_vector;
        vector<int> push_vector;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; ++i) {
            // Skip duplicates for the initial fixed_number
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int fixed_number = nums[i];
            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int sum_3 = nums[left] + nums[right] + fixed_number;

                if (sum_3 == 0) {
                    // Code to push the vector
                    push_vector = {fixed_number, nums[left], nums[right]};
                    result_vector.push_back(push_vector);

                    ++left;
                    --right;
                    while (left < right && nums[left] == nums[left - 1])
                        ++left;
                    while (left < right && nums[right] == nums[right + 1])
                        --right;
                } else if (sum_3 > 0) {
                    --right;
                } else {
                    ++left;
                }
            }
        }
        return result_vector;
    }
};
