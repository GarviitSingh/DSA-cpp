<<<<<<< Updated upstream
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;  //pointer created with * and & used for memory address location
    int** ptp = &ptr; //storing pointer to pointer

    cout << ptr << endl;
    cout << &ptr << endl;
    cout << ptp << endl;
    return 0;
=======
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;  //pointer created with * and & used for memory address location
    int** ptp = &ptr; //storing pointer to pointer

    cout << ptr << endl;
    cout << &ptr << endl;
    cout << ptp << endl;
    return 0;
>>>>>>> Stashed changes
}