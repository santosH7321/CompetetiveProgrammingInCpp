#include<iostream>
// #include<vector>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,9,6,7,8};
    int size = 8;
    int key = 5;

    bool flag = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == key){
            flag = 1;
            break;
        }
        else{
            flag = 0;
        }
    }
    if(flag){
        cout<<"Present "<<endl;
    }
    else{
        cout<<"Absent "<<endl;
    }

}