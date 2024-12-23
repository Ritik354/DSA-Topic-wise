#include <iostream>
using namespace std;

// Approach 1: Iterative
bool isPowerOfTwoIterative(int n) {
    if (n <= 0) return false;
    while (n % 2 == 0) {
        n /= 2;
    }
    return n == 1;
}

// Approach 2: Bit Manipulation
bool isPowerOfTwoBitManipulation(int n) {
    if (n <= 0) return false;
    return (n & (n - 1)) == 0;
}

// Approach 3: Using log2
#include <cmath>
bool isPowerOfTwoLog(int n) {
    if (n <= 0) return false;
    double logRes = log2(n);
    return floor(logRes) == logRes;
}

int main() {
    int num = 16;

    cout << "Iterative: " << (isPowerOfTwoIterative(num) ? "Yes" : "No") << endl;
    cout << "Bit Manipulation: " << (isPowerOfTwoBitManipulation(num) ? "Yes" : "No") << endl;
    cout << "Logarithmic: " << (isPowerOfTwoLog(num) ? "Yes" : "No") << endl;

    return 0;
}