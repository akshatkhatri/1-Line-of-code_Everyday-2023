/*
    The code defines a class Solution with a method removeDuplicates that takes a sorted array of integers (nums) as input.
    It uses a two-pointer approach to process the array and remove duplicate elements while keeping only unique values.
    The variable j is initialized to 0, representing the position where unique elements will be placed in the modified array.
    A for loop iterates through the array starting from the second element (index 1).
    For each iteration, it compares the current element (nums[i]) with the element at the position marked by the variable j.
    If the current element is greater than the element at position j, it swaps the current element with the element at the next position (nums[j+1]) and increments the value of j.
    This process effectively moves through the array, and whenever a distinct element is encountered, it is moved to the next position in the array (as denoted by j).
    The loop continues until all unique elements have been placed at the beginning of the array.
    Finally, the method returns the count of unique elements, represented by j+1, as the result. The array nums is modified in-place, with duplicate elements moved to the end of the array.

*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;

        for(int i=1;i<nums.size();i++){

            if(nums[i]>nums[j]){
                swap(nums[i],nums[j+1]);
                j++;
            }
        }
        return j+1;
    }
};
