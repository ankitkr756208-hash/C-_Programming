#include <iostream>
using namespace std;

// Helper function for positive exponent
float positiveExponent(int base, int exponent) {
    float result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// Main function
float allExponent(int baseValue, int exponentValue) {
    float res;

    if (exponentValue >= 0) {
        res = positiveExponent(baseValue, exponentValue);
    } else {
        // For negative exponent
        res = 1 / positiveExponent(baseValue, -exponentValue);
    }

    return res;
}

int main() {
    int base, exponent;
    cin >> base >> exponent;

    cout << allExponent(base, exponent);
    return 0;
}
