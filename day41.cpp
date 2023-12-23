/*
introduction:
The Largest Perimeter problem is a classic programming challenge that involves finding the maximum perimeter of a triangle given an array of positive integers representing the lengths of different sticks. In this blog post, we will explore an efficient C++ solution to this problem, breaking down the code step by step for better understanding.

Objective:
The goal of the provided C++ code is to find the largest possible perimeter of a triangle using a given set of stick lengths stored in a vector. The approach involves sorting the vector and then iteratively checking for valid triangles, ultimately returning the largest possible perimeter.
  */
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        int n=nums.size();
        vector<long long> arr(n);
        arr[0]=nums[0];

        for (int i = 1; i < n; ++i) {
            arr[i]=arr[i-1]+nums[i];
        }
        for(int i=n-1;i>=2;i--){
            if(nums[i]<arr[i-1]){
                return arr[i];
            }
        }

        return -1;
    }
    
};
/*
Code Explanation:

    Sorting the Input Vector:
    The first step in the code is to sort the input vector 'nums' in ascending order. Sorting simplifies the process of identifying the longest valid sides for constructing a triangle.

    Prefix Sum Calculation:
    After sorting, a new vector 'arr' is created to store the prefix sums of the sorted stick lengths. The prefix sum at each index 'i' represents the cumulative sum of the stick lengths from index 0 to 'i'. This step is crucial for efficiently checking triangle validity later in the code.

    Checking for Valid Triangles:
    The code then iterates backward through the sorted vector ('nums') starting from the third-to-last element. The loop condition 'i >= 2' ensures that there are at least three elements available for constructing a triangle.

    Inside the loop, the code checks whether the current stick length ('nums[i]') is less than the sum of the two preceding stick lengths ('arr[i-1]'). If this condition is satisfied, it implies that a valid triangle can be formed using these three stick lengths. In such a case, the function returns the largest perimeter found ('arr[i]').

    Returning -1 for No Valid Triangle:
    If no valid triangle is found after the loop completes, the function returns -1, indicating that it is not possible to form a triangle with the given stick lengths.

Conclusion:
The provided C++ solution efficiently tackles the Largest Perimeter problem by employing sorting and prefix sum calculation. The approach ensures that the code iterates through the sorted stick lengths, identifying the largest valid triangle perimeter. Understanding the logic behind each step is crucial for grasping the elegance and efficiency of this solution.*/
