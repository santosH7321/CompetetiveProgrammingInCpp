#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i =0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout<<j +1;
        }
        cout<<endl;
    }
}




//Output
// 1
// 12
// 123
// 1234
// 12345