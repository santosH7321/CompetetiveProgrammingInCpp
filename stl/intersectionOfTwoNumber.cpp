#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    //vector creation

    vector<int> arr{1,2,3,4,6,8};
    vector<int> brr{3,4,5};

    vector<int> ans;
    //outer loop on arr vector
    for(int i=0; i<arr.size(); i++){
        int element = arr[i];

        //for itration on brr
        for(int j=0; j<brr.size(); j++){
            if(element == brr[j]){
            brr[j] = -1;
            ans.push_back(element);
            }
        }
    }

    //Printing ans
    for(auto values: ans){
        cout<<values<<" ";
    }
}