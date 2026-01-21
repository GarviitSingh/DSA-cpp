#include <iostream>
using namespace std;

/*
Grading System:
Below 25       -> F
25 to 44       -> E
45 to 49       -> D
50 to 59       -> C
60 to 79       -> B
80 to 100      -> A
*/

int main() {
    int marks;
    cin >> marks;

    if (marks < 25) {
        cout << "F";
    }
    else if (marks <= 44) {
        cout << "E";
    }
    else if (marks <= 49) {
        cout << "D";
    }
    else if (marks <= 59) {
        cout << "C";
    }
    else if (marks <= 79) {
        cout << "B";
    }
    else if (marks <= 100) {
        cout << "A";
    }
    else {
        cout << "Invalid marks";
    }

    return 0;
}
