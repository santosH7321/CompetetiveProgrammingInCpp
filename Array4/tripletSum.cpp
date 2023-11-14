#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int element1, element2, element3;
    vector<int>arr{10,20,30,40,50};
    int sum = 80;

    for(int i = 0; i<arr.size(); i++){
        int element1 = arr[i];
    }

    for(int j = 0; j<arr.size(); j++)
    {
        int element2 = arr[j];
    }

    for(int k = 0; k<arr.size(); k++)
    {
        int element3 = arr[k];

        if(element1 + element2 + element3 == sum)
        {
            cout<<element1<<" , "<<element2<<" , "<<element3<<endl;
        }
    }
}