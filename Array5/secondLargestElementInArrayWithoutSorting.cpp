#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,7,7,5};
    int largest = arr[0];
    int slargest = -1;
    for(int i = 1; i<arr[i]-1; i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
        cout<<slargest;
    }
    
}