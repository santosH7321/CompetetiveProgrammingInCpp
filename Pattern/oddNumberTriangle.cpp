#include<iostream>
using namespace std;
int main(){
    int n, odd;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j= 1; j<=i; j++)
        {
            if(!n%2 == 0){
                 cout<<j;
            }
        }
        cout<<endl;
    }
}