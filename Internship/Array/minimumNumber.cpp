// #include<iostream>
// #include<limits.h>

// using namespace std;

// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8};
//     int size = 8;
//     int mini = INT_MAX;

//     for(int i=0; i<size; i++){
//         if(mini > arr[i]){
//             mini = arr[i];
//         }
//     }
//     cout<<"Minimum number is: "<<mini<<endl;
// }


// second method

#include<iostream>
#include<vector>
using namespace std;

int minimumNumber(vector<int> & arr){
    int mini = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(mini > arr[i]){
            mini = arr[i];
        }
    } 
    return mini;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    cout << minimumNumber(arr);
    return 0;
}