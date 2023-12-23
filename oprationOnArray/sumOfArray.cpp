#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int n;
    // taking input
    for(int i=0; i<n; i++){
        cout<<"Enter your index "<<i<<": ";
        cin>>arr[i];

    }

    //printing part (calculation)
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
        cout<<"Print sum till index "<<i<<": "<<sum<<endl;
    }
}