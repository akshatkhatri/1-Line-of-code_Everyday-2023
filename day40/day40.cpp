/*
Problem Overview:
The problem requires finding the maximum score after splitting a binary string into two non-empty substrings. The score is defined as the sum of zeros on the left side of the split and ones on the right side.

Approach:
The algorithm uses a two-pass approach to calculate the number of zeros on the left side (zero_left) and ones on the right side (ones_right). After obtaining these counts, it iterates through the string to find the split point that maximizes the score.
*/
class Solution {
public:
    int maxScore(string s) {
        int n=s.length();

        vector<int>zero_left(n);
        vector<int>ones_right(n);

        int zero_count=0;
        int ones_count=0;

        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                zero_count++;
            }
            zero_left[i]=zero_count;
        }

        for(int i=n-1;i>0;i--){
            if(s[i]=='1'){
                ones_count++;
            }
            ones_right[i-1]=ones_count;
        }

        int max_diff=0;
        
        for(int i=0;i<n-1;i++){
            max_diff=max((ones_right[i]+zero_left[i]),max_diff);
        }

        return max_diff;


    }
};
//110101001=5
/*
Algorithm Steps:

    Counting Zeros on the Left (zero_left):
        Initialize a variable zero_count to 0.
        Iterate through the string from left to right.
        If the current character is '0', increment zero_count.
        Update the zero_left array with the current count.

    Counting Ones on the Right (ones_right):
        Initialize a variable ones_count to 0.
        Iterate through the string from right to left.
        If the current character is '1', increment ones_count.
        Update the ones_right array with the current count, starting from the second-to-last position.

    Finding the Maximum Score:
        Initialize max_diff to 0.
        Iterate through the string from left to right, excluding the last position.
        For each position, calculate the score as the sum of the count of ones on the right (ones_right) and zeros on the left (zero_left).
        Update max_diff with the maximum score encountered.

    Return Result:
        Return the final max_diff as the result.

Example:
Consider the input string "110101001".

    After counting zeros on the left: zero_left = [0, 1, 1, 2, 2, 3, 3, 4, 4, 5]
    After counting ones on the right: ones_right = [5, 5, 4, 4, 4, 3, 3, 2, 1, 0]
    Calculating scores for possible splits: [5, 5, 4, 4, 4, 3, 3, 2, 1]
    Maximum score: 5

Time Complexity:

    The algorithm performs two passes through the input string, resulting in a time complexity of O(n).

Space Complexity:

    The algorithm uses additional space for two arrays (zero_left and ones_right), resulting in a space complexity of O(n).*/
