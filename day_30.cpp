/*Finding Maximum Product of Two Elements in an Array - Algorithm Explanation

In this post, we'll discuss a simple algorithm in C++ for finding the maximum product of two distinct elements in an array.
Algorithm Steps:

    Initialization: Start by initializing two variables, max and second_max, to 0. These variables will track the largest and second-largest elements in the array.

    Iterating through the Array: Iterate through the array, comparing each element with the current maximum (max) and updating max and second_max accordingly.

    Updating Maximum Values: If the current element is greater than or equal to the current max, update second_max to the old value of max and set max to the current element. This ensures that max holds the largest element, and second_max holds the second-largest element.

    Calculating Maximum Product: Return the maximum product of two distinct elements by subtracting 1 from each of the largest and second-largest elements and multiplying them together: (max-1)*(second_max-1).

Example:

Consider an example with the array {3, 5, 2, 7, 4}. The algorithm would identify max as 7 and second_max as 5, resulting in a maximum product of (7-1)*(5-1) = 24.*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int max=0;
        int second_max=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>=max){
                second_max=max;
                max=nums[i];
            }
            else if(nums[i]>second_max){
                second_max=nums[i];
            }
        }
        return (max-1)*(second_max-1);
    }
};
