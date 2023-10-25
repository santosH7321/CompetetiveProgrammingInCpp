#include<iostream>
using namespace std;
int main(){
    //Logical AND Operator is denoted by &&  true Only if bodh expression1 and expression2 is correct are true
    
    int a, b;
    cout<<"Enter two number: ";
    cin>>a>>b; // Input is 2 and 3 
    
    //Logical AND
    cout<<(a&&b)<<endl;  //it is true then return 1
    
    //Logical OR Operator is denoted by || true Only if one expression1 then it is return true

    cout<<(a || b)<<endl; // it is true then return 1

    //Logical NOT Operator is denoted by ! if any Number is true then it is converted into False and it is false then return true

    cout<<(!a)<<endl; //it is false then return 0

    return 0;
}