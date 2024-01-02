class Solution {
public:
    int myAtoi(string str) {
        int i = 0;
        const int len = str.size();

        // Skip white spaces
        while (i < len && str[i] == ' ') {
            ++i;
        }

        // Handle signs
        bool isNegative = false;
        if (i < len) {
            if (str[i] == '-') {
                isNegative = true;
                ++i;
            } else if (str[i] == '+') {
                ++i;
            }
        }

        int result = 0;

        while (i < len && isDigit(str[i])) {
            int digit = str[i] - '0';

            // Check for integer overflow
            if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && digit > 7)) {
                return isNegative ? INT_MIN : INT_MAX;
            }

            result = (result * 10) + digit;
            ++i;
        }

        return isNegative ? -result : result;
    }

private:
    bool isDigit(char ch) {
        return ch >= '0' && ch <= '9';
    }
};
