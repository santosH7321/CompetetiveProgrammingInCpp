//Assignment Operator is basically it is six types
// =, +=, -=, *=, /=, %=

#include<iostream>
using namespace std;
int main(){
    int p, q, R;
    cout<<"Enter Two number: ";
    cin>>p>>q;
    // R = p+=q
    cout<<"Your Assign is: "<<(p=q)<<" Equivalent to p = q "<<endl;
    cout<<"Your Sum is: "<<(p+=q)<<" Equivalent to p = p + q "<<endl;
    cout<<"Your Diffrence is: "<<(p-=q)<<" Equivalent to p = p - q "<<endl;
    cout<<"Your Product is: "<<(p*=q)<<" Equivalent to p = p * q "<<endl;
    cout<<"Your Divid is: "<<(p/=q)<<" Equivalent to p = p / q "<<endl;
    cout<<"Your Radius is: "<<(p%=q)<<" Equivalent to p = p % q "<<endl;
}