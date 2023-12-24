#include<iostream>
using namespace std;

int getUnique(int arr[], int size){
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans = ans ^ arr[i];

    }
    return ans;
}
int main(){
    int arr[] = {1,2,3,1,2,3,4,4,5,6,6};
    int size = 11;

    int finalAns = getUnique(arr, size);
    cout<<"Final answer is: "<<finalAns<<endl;
}