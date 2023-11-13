#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter a number: ";
    cin>> n;
    vector<int>brr(n, 10);

    cout<<"Size of b: "<<brr.size()<<endl;
    cout<<"Capacity of b: "<<brr.capacity()<<endl;

    for(int i = 0; i<brr.size(); i++)
    {
        cout<<brr[i]<<" ";
    }
        cout<<endl;

        cout<<"print crr: "<<endl;
        vector<int>crr(10,20,30,50);

        for(int i = 0; i<crr.size(); i++)
        {
            cout<<crr[i]<<" ";
        }
        cout<<endl;

        vector<int>drr;
        cout<<"Vector drr is empty or not: "<<drr.empty()<<endl;
}