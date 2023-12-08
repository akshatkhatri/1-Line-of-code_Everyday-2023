#include <vector>
#include <algorithm>

class Solution {
public:
    void nextPermutation(std::vector<int>& nums) {
        int break_point = -1;

        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                break_point = i;
                break;
            }
        }

        if (break_point == -1) {
            std::reverse(nums.begin(), nums.end());
            return;
        }

        for (int j = nums.size() - 1; j > break_point; j--) {
            if (nums[j] > nums[break_point]) {
                std::swap(nums[break_point], nums[j]);
                break;
            }
        }

        std::reverse(nums.begin() + break_point + 1, nums.end());
    }
};