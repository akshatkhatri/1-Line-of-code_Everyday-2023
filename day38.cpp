#include <unordered_map>
#include <string>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left_window = 0;
        int right_window = -1;
        int length = 0;

        unordered_map<char, int> charcount;

        for (int i = 0; i < s.length(); i++) {
            if (charcount[s[i]] > 0) {
                // Move the left window to the right of the repeated character
                left_window = max(left_window, charcount[s[i]]);
            }

            // Update the right window and character count
            right_window = i;
            charcount[s[i]] = i + 1;

            // Update the maximum length
            length = max(length, right_window - left_window + 1);
        }

        return length;
    }
};
/*    Sliding Window Technique:
    The algorithm uses a sliding window approach, where two pointers (left_window and right_window) define the boundaries of the current substring under consideration. The window slides through the string to explore all possible substrings.

    Data Structure - unordered_map:
    An unordered map (charcount) is employed to keep track of the count of each character encountered so far in the string. The keys of the map are characters, and the corresponding values are their counts.

    Iterating Through the String:
    A loop iterates through the characters of the input string. For each character at position i, the algorithm checks whether the character has been encountered before within the current substring.

    Updating the Window:
        If the character has not been encountered (charcount[s[i]] == 0), the right_window is extended to include the current character, and the count of that character is incremented in the map.
        If the character has been encountered before (charcount[s[i]] >= 1), it indicates a repeating character. The left_window is moved to the right of the last occurrence of the character, and the count is updated in the map.

    Calculating Maximum Length:
    The length of the current substring (right_window - left_window + 1) is calculated at each step, and the maximum length encountered so far is maintained.

    Returning the Result:
    The final result is the maximum length of a substring without repeating characters in the given string.

This algorithm efficiently explores substrings, updating the window and character counts as it goes, making it an optimal solution to the problem. The use of the unordered map allows for constant-time lookups, contributing to the overall efficiency of the algorithm.*/
