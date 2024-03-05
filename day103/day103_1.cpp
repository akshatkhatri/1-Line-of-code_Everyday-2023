#include <iostream>
#include <vector>
using namespace std;
vector<int> countFrequency(int n, int x,vector<int> &nums) {
   
    vector<int> hash(n, 0);

    for (int i = 0; i < n; i++) {
        
        if (nums[i] <= n) {
            hash[nums[i] - 1]++;
        }
    }

    return hash;
}


//generated the below part through AI for input handling

int main() {
    int n, x;
    std::cout << "Enter the size of the array (n): ";
    std::cin >> n;

    std::cout << "Enter the maximum value (x): ";
    std::cin >> x;

    std::vector<int> nums(n);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::vector<int> result = countFrequency(n, x, nums);

    // Print the result
    std::cout << "Resulting frequency array: ";
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }

    return 0;
}
