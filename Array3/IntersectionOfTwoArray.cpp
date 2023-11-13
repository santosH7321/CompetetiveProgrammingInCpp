#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,2,3,4,6,8};
    vector<int>arr{3,49,10};
    vector<int>ans;

    // Outer loop on arr vector

    for(int i = 0; i<arr.size(); i++)
    {
        int element = arr[i];
    }
    // for evert elements run loop on brr

    for(int j = 0; j<brr.size(); j++)
    {
        if(element == brr[j]){
            brr[j] = -1;
            ans.push_back(element);
        }
    }
    //Printing ans

    for(auto values: ans){
        cout<<values<<" ";
    }
}