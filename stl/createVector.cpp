#include<iostream>
#include<vector>
using namespace  std;
int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements "<<endl;

    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    //printing
    for(auto values: arr){
        cout<<values<<" ";
    }
   
}