#include<iostream>
using namespace std;
int main()
{
    int n=1;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }

}

   // Enter a number: 5
    // 11111
    // 22222
    // 33333
    // 44444
    // 55555