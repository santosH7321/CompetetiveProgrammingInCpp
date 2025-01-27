#include<iostream>
#include<vector>
using namespace std;

void findNumberHMT(vector<int>& arr){
    int n = arr.size();
    int zeroes = 0;
    int ones = 0;
    int twos = 0;
    int three = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            zeroes++;
        }
        else if(arr[i] == 1){
            ones++;
        }
        else if(arr[i] == 2){
            twos++;
        }
        else{
            three++;
        }
    }
    cout<<"No. of zeroes: "<<zeroes<<endl;
    cout<<"No. of ones: "<<ones<<endl;
    cout<<"No. of two: "<<twos<<endl;
    cout<<"No. of three: "<<three<<endl;
}
int main(){
    int arr[] = {1,1,1,1,0,0,0,0,0,2,2,2,2,2,3,3,3,3};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
    findNumberHMT(vec);
   
}