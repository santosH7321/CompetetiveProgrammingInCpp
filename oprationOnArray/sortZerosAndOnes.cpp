#include<iostream>
using namespace std;

void sortZeroOne(int arr[], int n){
    int zeroCount = 0;

    // Count the number of zeroes
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
           zeroCount++;
        }
    }

    // Place zeroes in the beginning
    for(int i = 0; i < zeroCount; i++){
        arr[i] = 0;
    }

    // Place ones after zeroes
    for(int i = zeroCount; i < n; i++){
        arr[i] = 1;
    }
}

int main(){
    int arr[] = {0,1,0,1,0,1,1,1,0,0,1,0,1,0};
    int n = 14;

    sortZeroOne(arr, n);

    // Printing the sorted array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
