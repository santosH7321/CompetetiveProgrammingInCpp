#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int n = 5;
    for(int i = 0; i<n; i++){
        //Taking input
        cout<<"Enter the value for index "<<i<<": ";
        cin>>arr[i];
        cout<<endl;
    }
    //print the array
    cout<<"Print the array "<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}