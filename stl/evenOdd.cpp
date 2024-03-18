#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter your size: ";
    cin>>n;

    //create a vector
    vector<int> ans(n);

    //Taking inputs
    
    for(int i=0; i<ans.size(); i++){
        cout<<"cout<<`Enter your index: "<<i<<endl;
        cin>>ans[i];
    }

    //printing
    for(int i=0; i<ans.size(); i++){
        if(i%2 ==0){
            cout<<"This is even number: "<<i<<endl;
        }
        else{
            cout<<"This is odd number: "<<i<<endl;
        }
    }
}