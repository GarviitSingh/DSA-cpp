#include <iostream>
using namespace std;

int main() {

    // for loop
    for (int i = 1; i <= 5; i++) {
        cout << "Computer " << i << endl;
    }

    cout << endl;

    // while loop
    int j = 1;
    while (j <= 5) {
        cout << "Jupiter " << j << endl;
        j++;
    }

    cout << endl;

    // do-while loop (executes at least once)
    int k = 2;
    do {
        cout << "Computer " << k << endl;
        k++;
    } while (k <= 1);

    return 0;
}
