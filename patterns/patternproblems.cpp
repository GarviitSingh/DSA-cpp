#include <iostream>
using namespace std;

int main(){
    int n = 4;
    char ch = '$' ;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout<<ch;
        }
        cout << endl;
    }  

    //

    int m = 5;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<i+1; j++){
            cout<<(i+1);
        }
        cout << endl;
    }

    //

    int a = 5;
    for(int i = 0; i<a; i++){
        char ch = 'A'+i;
        for(int j = 0; j<i+1; j++){
            cout<< ch;
        }
        cout << endl;
     }
    return 0;
}                                                                                    