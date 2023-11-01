#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {2,3,4,5,6,7,8,9,10};
    int size = 10;
    int mini = INT_MAX;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    cout<<"Minimum number is: "<<mini<<endl;
}