/*
Introduction

The provided C++ solution utilizes the Floyd's Tortoise and Hare algorithm to efficiently identify duplicate numbers within an array. This algorithm, originally designed for cycle detection in linked lists, is adapted here to solve the common programming problem of finding duplicate elements in an array.
Pointer Initialization

The algorithm begins by initializing two pointers, referred to as slow and fast, both set to the value of the first element in the input vector nums. These pointers will be used to traverse the array and detect the presence of a cycle.
Detecting the Cycle

A loop is implemented where the slow pointer advances one step at a time, and the fast pointer moves two steps at a time. The loop continues until the two pointers meet. This meeting point indicates the existence of a cycle in the array, which is crucial for identifying the duplicate number.
Finding the Entry Point of the Cycle

Once a cycle is detected, the fast pointer is reset to the beginning of the array, while the slow pointer retains its position within the cycle. Both pointers then move at the same pace (one step at a time) until they meet again. This meeting point serves as the entry point of the cycle and corresponds to the duplicate number in the array.
Conclusion

In conclusion, the Floyd's Tortoise and Hare algorithm provides an elegant and efficient solution to the problem of finding duplicate numbers in an array. By leveraging the principles of pointer movements and cycle detection, the algorithm is well-suited for this task and demonstrates its versatility beyond its original application in linked lists.
Applications

Beyond array duplicates, the Floyd's Tortoise and Hare algorithm has widespread applications, particularly in detecting cycles in various data structures. Its adaptability makes it a valuable tool for programmers dealing with algorithms and data structure-related challenges.
*/
class Solution {
public:
    // Function to find a duplicate number in the given vector
    int findDuplicate(vector<int>& nums) {
        // Initialize two pointers, slow and fast, with the first element of the vector
        int slow = nums[0];
        int fast = nums[0];

        // Phase 1: Detecting the cycle
        do {
            // Move the slow pointer one step
            slow = nums[slow];
            
            // Move the fast pointer two steps
            fast = nums[nums[fast]];
        } while (slow != fast);  // Continue until the pointers meet, indicating a cycle

        // Phase 2: Finding the entry point of the cycle
        fast = nums[0];  // Reset the fast pointer to the beginning of the array

        while (slow != fast) {
            // Move both pointers one step at a time until they meet
            slow = nums[slow];
            fast = nums[fast];
        }

        // The meeting point is the entry point of the cycle and corresponds to the duplicate number
        return slow;
    }
};
