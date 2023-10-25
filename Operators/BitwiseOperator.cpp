//Bitwise Operator is bassically it is six types (~, <<, >>, >>>, &, ^)

//~ (Bitwise Compliment)
// <<(Left Shift)
//>>(Right Shift)
//>>> (Unsined Right Shift)
//& (Bitwise AND)
//^ (Bitwise Exclusive OR)

#include<iostream>
using namespace std;
int main()
{

                // *********************************
                // *    Bitwise Compliment (~)     *
                // *********************************  


    int Number = 20;

    int Compliment = ~Number; //(Bitwise Compliment is (Bitwise NOT))

    cout<<Number<<endl; //print 20
    cout<<Compliment<<endl; // then increase by 1 and result is -21

                // *********************************
                // *     Left Shift (<<)           *
                // *********************************     

    int num1 = 20;
    cout<<(num1<<1)<<endl; //multiply into 2 result is 20*2 = 40
    cout<<(num1<<2)<<endl; //multiply into 2*2 =4 result is 20*4 = 80

                // *********************************
                // *     Right Shift (>>)          *
                // *********************************

    cout<<(num1>>1)<<endl; //Divide into 2 result is 20/2 = 10
    cout<<(num1>>2)<<endl; //Divide into 4 result is 20/4 = 5

    
                // *********************************
                // *   Unsined Right Shift (>>>)   *
                // *********************************

    // cout<<(num1>>>1)<<endl;

                // *********************************
                // *        Bitwise AND (&)        *
                // *********************************







                // *********************************
                // *    Bitwise Exclusive OR (^)   *
                // *********************************
}