#include<iostream>
using namespace std;
void solidStar(int x){
    for(int i=1; i<=x; i++){
        for(int j=1; j<=x; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void triangleStar(int x){
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    solidStar(5);
    cout<<endl;
    triangleStar(4);
}