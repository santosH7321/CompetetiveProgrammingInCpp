#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int>arr)
{
    int ans=0;
    for(int i = 0; i<arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int n; // 11
    cout<<"Enter the sizeof arr: ";
    cin>>n;

    vector<int>arr(n);  // 1,2,4,2,1,3,6,5,5,6,4
    cout<<"Enter the element: "<<endl;

    // Taking input
    for(int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    int UniqueElement = findUnique(arr);

    cout<<"Unique Element is: "<<UniqueElement<<endl;  //3
} 