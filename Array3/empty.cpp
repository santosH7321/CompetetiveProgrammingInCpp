#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // Create vector
    vector<int>arr;
    int ans = (sizeof(arr)/sizeof(int));
    cout<<ans<<endl; //3

    cout<<arr.size()<<endl; //0
    cout<<arr.capacity()<<endl; //0


}