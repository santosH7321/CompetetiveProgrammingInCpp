#include <iostream>
using namespace std;
int main()
{
    float selingPrice, costPrice, num;
    cout << "Enter two number: ";
    cin >> selingPrice >> costPrice;
    if (selingPrice > costPrice)
    {
        cout << "You are in profit: " << endl;
    }
    else if (selingPrice == costPrice)
    {
        cout << "You are in no profit and no loss: " << endl;
    }
    else
    {
        cout << "You are in loss: " << endl;
    }
}