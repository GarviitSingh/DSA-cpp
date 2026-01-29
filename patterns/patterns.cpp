#include <iostream>
using namespace std;

int main() {
    //printing star pattern
    int n = 4;
    for(int i = 0; i<n ;i++){
        for(int j = 0; j<n ;j++){
            cout << "*" << " ";
        }
        cout << endl;
    } 

    // printing number pattern
    int m = 4;
    for(int i = 0; i<m;i++){
        for(int j = 0; j<m ;j++){
            cout << j << " ";
        }
        cout << endl;
    } 

    //printing alphabets pattern
    int b = 4;
    for(int i = 0; i<b; i++){
        char ch = 'A';
        for(int j = 0; j<b; j++){
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }

    //printing numbers in line
    int a = 3;
    int num = 1;
    for(int i = 0; i<a; i++){
        for(int j = 0; j<a; j++){
            cout << num;
            num++;
        }
        cout << endl;
    }
    //printing alphabets in line a=3
    int a = 3;
    char gg = 1;
    for(int i = 0; i<a; i++){
        for(int j = 0; j<a; j++){
            cout << gg;
            gg++;
        }
        cout << endl;
    }

    return 0;
}


   

