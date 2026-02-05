<<<<<<< Updated upstream
#include <iostream>
using namespace std;

void changeA(int* ptr) {  //pass by refernce using pointer
        *ptr = 20;
    }

int main(){
        int a = 10;
        changeA(&a);

        cout << a << endl; // 20

        return 0;
}
=======
#include <iostream>
using namespace std;

void changeA(int* ptr) {  //pass by refernce using pointer
        *ptr = 20;
    }

int main(){
        int a = 10;
        changeA(&a);

        cout << a << endl; // 20

        return 0;
}
>>>>>>> Stashed changes
