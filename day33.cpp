/*The Problem:
The goal is to determine the length of the last word in a given string. A word is defined as a sequence of non-space characters. For example, in the string "Hello World," the last word is "World," and its length is 5.*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                count++;
            } else if (count > 0) {
                
                break;
            }
        }
        return count;
    }
};
/*Code Explanation:

    We initialize a variable count to keep track of the length of the last word.

    We start iterating through the string s from the end (s.length() - 1) using a for loop.

    Within the loop, we check if the character at the current position (s[i]) is not a space. If true, we increment the count to keep track of the length of the word.

    If we encounter a space and the count is greater than 0, it means we have counted a word. We break out of the loop at this point since we are only interested in the last word.

    Finally, we return the value of count, which represents the length of the last word.

Common Mistake Correction:
The original code had a mistake in the loop condition (i >= 0 instead of i > 0). Additionally, the loop was not decrementing the index (i-- was missing). These corrections ensure that we iterate through the string correctly without going out of bounds.

Conclusion:
Understanding and manipulating strings is a common task in programming, and the provided C++ solution effectively finds the length of the last word in a given string. By breaking down the code and explaining its logic, we can gain insight into how to approach similar string manipulation challenges in C++.*/
