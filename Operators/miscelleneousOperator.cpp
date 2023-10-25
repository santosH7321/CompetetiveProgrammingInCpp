//sizeof Operator, ternery Operator, commaOperator, dotOperator And AeroOperator, AddressOfOperator

#include<iostream>
using namespace std;
int main()
{
                 /**********************************
                 *          sizeof Operator        *
                 **********************************/

    cout<<"size of int in bytes: "<<sizeof(int)<<endl; //4
    cout<<"size of float in bytes: "<<sizeof(float)<<endl; //4
    cout<<"size of char in bytes: "<<sizeof(char)<<endl; //1
    cout<<"size of bool in bytes: "<<sizeof(bool)<<endl; //1
    cout<<"size of double in  bytes: "<<sizeof(double)<<endl; //8

                 /**********************************
                 * Ternery ya Conditional Operator *
                  **********************************/

    int result;

    result = 5<3 ? 1 : 0;
    //variable = condition ? true : false

    cout<<result<<endl; //output: 0



                /**********************************
                 *          Comma Operator        *
                 **********************************/
    
    int a = 5, b = 10, c;

    c = (a +=2, b+=3, a+b);

    cout<<"C = "<<c<<endl; //20






                /**********************************
                 *      Dot ya Aero Operator      *
                 **********************************/

                



                /**********************************
                 *      AddressOf Operator (&)      *
                 **********************************/

                int number = 20;
                int* address = &number;

                cout<<"Value of number: "<<number<<endl; //20
                cout<<"Value of address: "<<address<<endl; //
}