#include <iostream>
using namespace std;

/*
Day 2: Arrays (2D)
Topics:
- 2D array declaration
- Accessing elements
*/

int main() {
    int arr[3][3];

    // Input elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Access a specific element
    cout << arr[1][2];

    return 0;
}
