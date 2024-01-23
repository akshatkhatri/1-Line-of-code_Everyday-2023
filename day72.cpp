#include <iostream>
using namespace std;

class Fibonacci {
public:
    int calculate(int n) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        return calculate(n - 1) + calculate(n - 2);
    }
};

class NamePrinter {
public:
    void printAkshat(int n) {
        if (n == 0) {
            return;
        }
        cout << "Akshat" << endl;
        printAkshat(n - 1);
    }

    void printRange(int lower, int upper) {
        if (lower > upper) {
            return;
        }
        cout << lower << " ";
        printRange(lower + 1, upper);
    }
};

int main() {
    int n;
    cout << "Enter a number for Fibonacci calculation:" << endl;
    cin >> n;

    Fibonacci fibObj;
    cout << "Fibonacci result: " << fibObj.calculate(n) << endl;

    NamePrinter namePrinterObj;
    cout << "Enter a number for Akshat printing:" << endl;
    cin >> n;
    namePrinterObj.printAkshat(n);

    int lower = 1, upper;
    cout << "Enter the upper limit for range printing:" << endl;
    cin >> upper;
    namePrinterObj.printRange(lower, upper);

    return 0;
}

