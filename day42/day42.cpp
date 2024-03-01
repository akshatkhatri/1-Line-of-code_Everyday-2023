/*
The minOperations function takes a string s as input and is designed to find the minimum number of operations required to transform the string into an alternating sequence of '0's and '1's. The operations allowed involve flipping consecutive characters within the string.Two integer variables, start0 and start1, are initialized to zero. These variables will be used to keep track of the number of operations needed to start the alternating sequence with '0' and '1', respectively.The function iterates through each character in the input string using a loop. Inside the loop, it checks whether the current index i is even or odd using the modulo operator.
If the current index is even and the character at that position in the string is '0', it increments the start1 counter. Otherwise, it increments the start0 counter.If the current index is odd and the character at that position in the string is '1', it increments the start1 counter. Otherwise, it increments the start0 counter.The function concludes by returning the minimum of the two counters (start0 and start1), representing the minimum number of operations required to achieve the desired alternating sequence.
*/
class Solution {
public:
    int minOperations(string s) {
        int start0 = 0;
        int start1 = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0) {
                if (s[i] == '0') {
                    start1++;
                } else {
                    start0++;
                }
            } else {
                if (s[i] == '1') {
                    start1++;
                } else {
                    start0++;
                }
            }
        }
    return min(start0, start1);
    }
};
