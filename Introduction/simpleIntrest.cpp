#include<iostream>
using namespace std;
int main(){

    //Intilisation 
    float p, r, t, simpleIntrest;
    //Printing
    cout<<"Enter princiaplea, rate and Time: ";
    //Taking Input
    cin>>p>>r>>t;
    //Formula and formet
    simpleIntrest = (p * r * t) /100;
    //Final result
    cout<<"Simple intrest is: "<<simpleIntrest;
}