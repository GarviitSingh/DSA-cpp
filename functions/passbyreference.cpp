#include <iostream>
using namespace std;

// Pass by reference
void update(int& a, int& b) {
    a = a + 10;
    b = b + 10;
}

int main() {
    int a = 4, b = 5;

    update(a, b);

    cout << a << endl;
    cout << b << endl;

    return 0;
}
// here &a and &b refer to original variables
// //output will be 14 and 15 respectively
// no copies made