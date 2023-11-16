#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,2,1,1,1,2,2,2,1,2};
    int start = 0;
    int end = arr.size()-1;
    int i = 0;
    while(i != end)
    {
        if(arr[i] == 1){
        //Swap from left
        swap(arr[start], arr[i]);
        i++;
        start++;
        } else{
            //swap from right
            swap(arr[i], arr[end]);
            end--;
        }
    } //Printing
    for(auto value: arr){
        cout<<value <<" ";
    }
}