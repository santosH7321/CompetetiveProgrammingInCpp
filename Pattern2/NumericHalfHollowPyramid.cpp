#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>> n;
 
    for(int i = 0; i < n; i++ )
    {
        for(int j = 0; j<= n; j++){
            if(j ==0 || j == i || i == n -1)
            {
                cout<<j + 1;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

// Enter a number: 5
// 1
// 12
// 1 3
// 1  4
// 123456