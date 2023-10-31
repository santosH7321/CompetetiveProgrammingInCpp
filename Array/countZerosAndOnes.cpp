#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,1,0,1,0,0,0,1,};
    int size = 15;
    int numZero = 0;
    int numOne = 0;
    for(int i = 0; i < size; i++)
    {
        //If Zeros is found 
        if(arr[i]==0){
            numZero++;
        } 
        //for one
        if(arr[i]==1){
            numOne++;
        }
    }
    cout<<"Number of zeroes: "<< numZero <<endl;
    cout<<"Number of ones: "<< numOne <<endl;
}