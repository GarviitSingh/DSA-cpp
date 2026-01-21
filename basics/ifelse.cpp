#include <iostream>
using namespace std;

// Program to check whether a person is an adult or not

int main() {
    int age;
    cin >> age;

    if (age >= 18) {
        cout << "YES, you are an adult";
    } else {
        cout << "NO, you are not an adult";
    }

    return 0;
}
