#include<iostream>
using namespace std;
int main()
{
    //Initilise
    int n;
    //print
    cout<<"Enter a number: ";
    //Taking input
    cin>>n;
    // Loop Iteration
    for(int i= 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}