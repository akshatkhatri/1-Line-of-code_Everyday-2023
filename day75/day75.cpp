//LC PROBLEM

class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Base case
        if (n <= 0) {
            return false;  
        } else if (n == 1) {
            return true;   
        } else if (n % 2 != 0) {
            return false;  
        } else {
            return isPowerOfTwo(n / 2);
        }
    }
};

// Recursion Practise 

#include <iostream>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    std::cout << "Enter a number to calculate its factorial: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        std::cout << "Factorial of " << n << " is: " << factorial(n) << std::endl;
    }

    return 0;
}

