#include<iostream>
using namespace std;
int main(){
    int b, a, c, Discrimenant;
    cout<<"Enter number b , a and c: ";
    cin>> b>> a >> c;
    Discrimenant = b*b - 4 * a * c;
    cout<<"Your discrimemant is : "<<Discrimenant;
}