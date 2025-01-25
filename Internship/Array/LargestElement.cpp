#include<iostream>
#include<vector>
using namespace std;

 int largest(vector<int> &arr) {
        int largest = arr[0];
        int n = arr.size();
        for(int i=0; i<n; i++){
            if(arr[i] > largest){
                largest = arr[i];
            }
        }
        return largest;
    }
int main(){
    int arr[5] = {3,2,1,5,2};
    vector<int> v(arr, arr+5);
    cout << "Largest number in the array is: " << largest(v);
    return 0;
 
}