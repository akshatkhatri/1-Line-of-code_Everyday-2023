#include <iostream>

using namespace std;

// Function to calculate the sum recursively
void recursive_sum(int i, int sum) {
    // Base case: If i is less than 1, print the sum and return
    if (i < 1) {
        cout << "Sum: " << sum << endl;
        return;
    }

    // Recursive case: Call the function with updated values
    recursive_sum(i - 1, sum + i);
}

int main() {
    
    int i;
    cout << "Enter the number: ";
    cin >> i;
    int sum = 0;

    // Call the recursive function to calculate the sum
    recursive_sum(i, sum);

    return 0;
}


// LC Problem 
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      vector<int> ans;
      int sum=0;
      int n=nums.size();
      for(int i=0;i<n;i++)
      {
          sum=sum+nums[i];
          ans.push_back(sum);
      } 
      return ans; 
    }
};
