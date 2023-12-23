#include<iostream>
using namespace std;
int main(){
    int arr[5] = {4,6,8,10,12};
    int n = 5;
    int target = 10;

    bool flag = 0;
    // 0 -> not found
    // 1 -> found
    for(int i = 0; i<n; i++){
        if(arr[i] == target){
            // cout<<"Target found "<<endl;
            flag = 1;
            break;
        }
        
    }
    if(flag == 1){
        cout<<"Target found "<<endl;
    }
    else{
            cout<<"Target not found "<<endl;
        }
}