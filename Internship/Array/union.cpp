#include<iostream>
using namespace std;

void printUnion(int* arr, int size1, int* brr, int size2){
    
}

int main(){
    int arr[] = {1,2,3,4,5};
    int brr[] = {3,4,5,6,7,8,9,10};

    int size1 = sizeof(arr) / sizeof(arr[0]);
    int size2 = sizeof(brr) / sizeof(brr[0]);

    printUnion(arr, size1, brr, size2);

    return 0;
}