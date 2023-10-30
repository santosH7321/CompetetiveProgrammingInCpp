#include<iostream>
using namespace std;
int main(){
    int n;
    for(int row = 0; row<3; row++)
    {
        if(row == 0 || row == 2)
        {
            for(int col = 0; col<5; col++)
            {
                cout<<"*";
            }
        } else{
            cout<<"*";
            for(int col = 0; col<3; col +=1 ){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;

    }
}

//Output: 
// *****
// *   *
// *****