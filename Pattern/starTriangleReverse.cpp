#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    for(int row=number; row>=1; row--)
    {
        for(int col=1; col<=row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

// Enter a number: 5
// *****
// ****
// ***
// **
// *