#include <iostream>
using namespace std;

// Q1: Sum of numbers from 1 to N
int sumN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// Q2: Factorial of N
int factN(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    cout << "Sum till 10: " << sumN(10) << endl;
    cout << "Factorial of 4: " << factN(4) << endl;

    return 0;
}
