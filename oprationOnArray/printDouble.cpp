#include<iostream>
using namespace std;
int main(){
    //initilization
    int arr[10];

    //Taking input
    int n = 10;
    for(int i = 0; i<n; i++){
        cout<<"Enter the value for index "<<i<<": ";
        cin>>arr[i];
    }

    //printing
    for(int i = 0; i<n; i++){
        arr[i] = 2 * arr[i]; // print double
        cout<<arr[i]<<", ";
    }
}