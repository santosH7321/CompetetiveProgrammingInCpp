#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,0,1,1,1,1,0,0,0,1,0};
    int size = 11;
    int numberOfOnes = 0;
    int numberOfZeors = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            numberOfZeors++;
        }
        if (arr[i] == 1)
        {
            numberOfOnes++;
        }
        
    }
    cout<<"Nuber of Ones: "<<numberOfOnes<<endl;
    cout<<"Number of Zeros: "<<numberOfZeors<<endl;
}