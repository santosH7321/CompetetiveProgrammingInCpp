#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i =0; i<n; i++){
        for(int j = 0; j<n-i; j++){
            cout<<j +1;
        }
        cout<<endl;
    }
}
//Input: Enter a number: 5
//OutPut:

// 12345
// 1234
// 123
// 12
// 1