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

    int v = 5;
    for(int i = 0; i<v; i++){
        for(int j = 0; j<i+1; j++){
            cout<< j+1;
        }
        cout << endl;
    }
    
    int g = 4;
    for(int i = 0; i<g; i++){
        for(int j =i+ 1; j>0; j--){
            cout<< j;
        }
        cout << endl;
    }    
    

    //floyd triangle - numbers
    int c = 4;
    int num = 1;
    for(int i = 0; i < c;i++){
        for(int j = 0; j < i+1;j++){
            cout << num; 
            num++;   
        }
        cout << endl;
    }

    //floyd triangle - alphabets
    int d = 4;
    char h = 'A';
    for(int i = 0; i < d;i++){
        for(int j = 0; j < i+1;j++){
            cout << h; 
            h++;   
        }
        cout << endl;
    }

    //inverted triangle -numebrs
    int e = 4;
    for(int i = 0; i<e; i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j = 0; j<n-i; j++){
            cout << (i+1);
        }
        cout << endl;
    }

    //inverted triangle -characters 
    int f = 4;
    char chh ='A';
    for(int i = 0; i<f; i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j = 0; j<f-i; j++){
            cout << chh;
            
        }
        chh++;
        cout << endl;
    } 
    
    //pyramind pattern
    int k = 4;
    for (int i=0;i<k;i++){
        //spaces : n-i-1
        for(int j=0; j<k-i-1; j++){
            cout << " ";
        }
        //num1 :i+1
        for(int j=1; j<=i+1; j++){
            cout << j;
        }
        //num2 :backward
        for(int j=i; j>0; j--){
            cout << j;
        }
        cout << endl;    
    }
    return 0; 
}                                                                                                                                                                   
