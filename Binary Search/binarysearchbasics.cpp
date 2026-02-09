#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr,int tar){
    int start=0, end=arr.size()-1;

    while(start <= end){
        int mid = (start+end)/2;
        if (tar< arr[mid]) {
            end=mid-1;
        }
        else if (tar>arr[mid]) {
            start=mid+1;
        }
        else {
            return mid;
        }
    }

    return -1; //if target doesnt exist in the array
}

int main(){
    vector <int> arr1 = {-1,0,3,4,5,9,12}; //even   
    int tar1 = 12; //target=12
    cout << binarySearch(arr1,tar1) << endl; //6th index = 12
    
    vector <int> arr2 = {-1,0,3,5,9,12}; //odd
    int tar2 = 0;
    cout << binarySearch(arr2,tar2) << endl; //1th index = 0
    return 0;
}