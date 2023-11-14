#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,2,3,4,6,8};
    vector<int>brr{3,49,10};

    vector<int>ans;
    //Outer loop on arr vectors

    for(int i = 0; i<arr.size(); i++)
    {
        int element = arr[i];
    }
    //for every elements , run loop on brr

    for(int j = 0; j<brr.size(); j++)
    {
        if(element == brr[j])
        {
            brr[j]=-1;
            ans.push_back(element);
        }
    }
    //printing array
    for(auto values: ans)
    {
        cout<<values<<" ";
    }
}