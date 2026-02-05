#include <iostream>
#include <string>
using namespace std;

// String characters are stored using 0-based indexing

int main() {
    string s = "Computer";

    // length of stringS
    int len = s.size();
    cout << "Length: " << len << endl;

    // change last character
    s[len - 1] = 'y';

    cout << "Modified string: " << s << endl;

    return 0;
}
