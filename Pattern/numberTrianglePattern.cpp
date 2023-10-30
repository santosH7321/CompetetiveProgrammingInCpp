#include<iostream>
using namespace std;
int main()
{
    int n = 1;
    cout<<"Enter a number: ";
    cin>>n;                 // Input: n = 5;
    for(int i = 1; i<=n; i++)
    {
        for(int j =1; j<=i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }

}
//    //input: Enter a number: 5
       //output:           1
                        // 22
                        // 333
                        // 4444
                        // 55555