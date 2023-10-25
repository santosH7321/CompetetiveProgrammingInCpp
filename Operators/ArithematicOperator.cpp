#include<iostream>
using namespace std;
int main()
{
    // Arithematic Operator is +, -, *, /, % ;
    int a, b, sum, diffrence, product, divide, remainder;
    cout<<"Enter two number: ";
    cin>>a >>b;

    //Formula 
    
    sum = a+b;
    diffrence = a-b;
    product = a*b;
    divide = a/b;
    remainder = a%b;

    //Printing

    cout<<"Your result of: "<<sum<<endl;
    cout<<"Your result of: "<<diffrence<<endl;
    cout<<"Your result of: "<<product<<endl;
    cout<<"Your result of: "<<divide<<endl;
    cout<<"Your result of: "<<remainder<<endl;
    
}
