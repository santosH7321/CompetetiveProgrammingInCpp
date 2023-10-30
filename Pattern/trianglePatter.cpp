#include<iostream>
using namespace std;
int main(){
    //Initilise
    int n;
    //Printing
    cout<<"Enter the number: ";
    //Taking Input
    cin>>n;
    // itteration of loop
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        //Next line
        cout<<endl;
    }
}