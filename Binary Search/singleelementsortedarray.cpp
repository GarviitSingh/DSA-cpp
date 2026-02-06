#include <iostream>
#include <vector>
using namespace std;

int singleElement(const vector<int>& arr) {
    int n = arr.size();

    if (n == 1) return arr[0];

    int start = 0, end = n - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        // ensure mid is even
        if (mid % 2 == 1) {
            mid--;
        }

        if (arr[mid] == arr[mid + 1]) {
            start = mid + 2;   // single element on right side
        } else {
            end = mid;        // single element on left side
        }
    }

    return arr[start];
}

int main() {
    vector<int> arr = {1,1,2,3,3,4,4,8,8};
    cout << singleElement(arr) << endl;
    return 0;
}
