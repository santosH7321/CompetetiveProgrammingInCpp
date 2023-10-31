#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8,9,1,2,3,3,3,4,4,4,5,5,5,5,5,1,1,1,1,2,2,2};
    int size = 50;
    int numZero = 0;
    int numOne = 0;
    int numTwo = 0;
    int numThree = 0;
    int numFour = 0;
    int numFive = 0;

    for(int i = 0; i < size; i++){

        if(arr[i] == 0){
            numZero++;
        }
        if(arr[i] == 1){
            numOne++;
        }
        if(arr[i] == 2){
            numTwo++;
        }
        if(arr[i] == 3){
            numThree++;
        }
        if(arr[i] == 4){
            numFour++;
        }
        if(arr[i] == 5){
            numFive++;
        }
    }
    cout<<"Number of Zeroes: "<< numZero << endl;
    cout<<"Number of One: "<< numOne << endl;
    cout<<"Number of Two: "<< numTwo << endl;
    cout<<"Number of Three: "<< numThree << endl;
    cout<<"Number of Four: "<< numFour << endl;
    cout<<"Number of Five: "<< numFive << endl;
}