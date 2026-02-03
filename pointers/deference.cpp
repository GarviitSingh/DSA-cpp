#include <iostream>
using namespace std;

int main(){
    int a = 8;
    int* ptr = &a;

    cout << ptr << endl;
    cout << *(&a) << endl; // this defrence will tell the value stored at address - 8 
    cout << *(ptr) << endl; // will also give same value as ptr have same address 
    cout << " " << endl;

    int** parptr = &ptr; //storing pointer to pointer 
    cout << **(parptr) << endl; // 8

    //Null pointer

    int* pot = NULL;  
    cout << pot << endl; // 0 
    // without null pointer it will show some garbage value
    return 0;
}