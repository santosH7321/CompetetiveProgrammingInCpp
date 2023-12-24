#include<iostream>
using namespace std;

void shiftArray(int arr[], int n){
    //step 1
    int temp = arr[n-1];

    // Step 2
    //shift -> arr[i] = arr[i-1];

    for(int i=n-1; i>=1; i--){
        arr[i]=arr[i-1];
    }    

    //step 3 copy temp inti other index
    arr[0] = temp;
}
int main(){
    int arr[] = {10,20,30,40,50,60}; //60 10 20 30 40 50 
    int n =6;
    shiftArray(arr, n);

    //Printing an array
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}