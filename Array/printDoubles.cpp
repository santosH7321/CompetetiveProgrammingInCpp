#include<iostream>
using namespace std;
int main(){
    int arr[500];
    int n;
    cout<<"How many nubers you want to add in arr: ";
    cin >> n;
    cout<<"Enter the numbers: ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //Printing
    for(int i = 0; i < n; i++)
    {
        cout<< 2 * arr[i]<< " ";
    }
}