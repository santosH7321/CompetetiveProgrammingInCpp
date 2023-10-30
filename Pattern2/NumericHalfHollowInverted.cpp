#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>> n;
 
    for(int i = 0; i < n; i++ )
    {
        for(int j = i + 1; j<= n; j++){
            if(j == i+1 || j == n || i == 0)
            {
                cout<<j ;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}


// Enter a number: 5
// 12345
// 2  5
// 3 5
// 45
// 5