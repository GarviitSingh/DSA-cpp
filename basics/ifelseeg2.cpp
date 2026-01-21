#include <iostream>
using namespace std;

/*
Take age from the user and decide accordingly:
1. age < 18
   -> not eligible for job
2. age >= 18 and age <= 54
   -> eligible for job
3. age >= 55 and age <= 57
   -> eligible for job, but retirement soon
4. age > 57
   -> retirement time
*/

int main() {
    int age;
    cin >> age;

    if (age < 18) {
        cout << "Not eligible for job";
    }
    else if (age <= 54) {
        cout << "Eligible for job";
    }
    else if (age <= 57) {
        cout << "Eligible for job, but retirement soon";
    }
    else {
        cout << "Retirement time";
    }

    return 0;
}
