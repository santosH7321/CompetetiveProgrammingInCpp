#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,3,4,5,3,2};
    int size = 10;
    int numThree = 0;
    for(int i = 0; i< size; i++){
        //three is found
        if(arr[i] == 3)
        {
            numThree++;
        }
      
    }
    cout<<"Number of three is: "<<numThree<<endl;
}