#include<iostream>
using namespace std;

void reverseRec(int n){
    for(int i = 1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    reverseRec(5);
}