<<<<<<< Updated upstream
#include <iostream>
using namespace std;

int main(){
    int a = 5; 
    int *p = &a;
    int **q = &p;

    cout << *p << endl;  // 5
    cout << **q << endl; // 5
    cout << p << endl;
    cout << *q << endl;

    return 0;
=======
#include <iostream>
using namespace std;

int main(){
    int a = 5; 
    int *p = &a;
    int **q = &p;

    cout << *p << endl;  // 5
    cout << **q << endl; // 5
    cout << p << endl;
    cout << *q << endl;

    return 0;
>>>>>>> Stashed changes
}