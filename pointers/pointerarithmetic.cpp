#include <iostream>
using namespace std;

//Pointers arithmetic 
int main() {
    int arr[]= {1,2,3,4,5};

    int a= 10;
    int* ptr = &a;
    cout << ptr << endl; //0x7fff38de544c

    ptr--; //decrement-it does -4 as its integer 
    cout << ptr << endl; //0x7fff38de5448 

    ptr++; //increment-it does +4 as its integer (8+4= c) 
    cout << ptr << endl; //0x7fff38de544c

// accessing numbers from pointers
    cout << *arr << endl; // 1
    cout << *arr+1 << endl; // 2
    cout << *arr+2 << endl; // 3
    cout << *arr+3 << endl; // 4
    cout << *arr+4 << endl; // 5

//we cannot add to pointers but can subtract them 
    int* ptr1 ;
    int* ptr2= ptr1 + 2;

    cout << "subtract= " << ptr2 - ptr1 << endl;

//Compare operation 
    int* pr1;
    int* pr2;

    cout << pr1 <<endl;
    cout << pr2 <<endl;

    cout << (pr1 < pr2) << endl; // 1 false 
    cout << (pr2 < pr1) << endl; // 0 true

    return 0;
}