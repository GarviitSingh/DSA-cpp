#include <iostream>
using namespace std;

/*
Day 2: Arrays (1D)
Topics:
- Array input
- Indexing
- Updating elements
*/

int main() {
    int arr[5];

    // Input array elements
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];  
    // example input: 2 5 8 14 22

    // Update an element
    arr[3] = 99;

    // Output updated element
    cout << arr[3];   // output: 99

    return 0;
}
