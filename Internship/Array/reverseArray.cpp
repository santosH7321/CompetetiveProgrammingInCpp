// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {5,4,3,2,1};
//     int size = 5;
//     int start = 0;
//     int end = size-1;

//     while(start <= end){
//         // step - 1
//         swap(arr[start], arr[end]);
//         // step - 2
//         start++;
//         // step - 3
//         end--;
//     }
   

//     // printing
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }


#include<iostream>
#include<vector>
using namespace std;

int reverseArray(vector<int> & arr){
    int start = 0;
    int size = arr.size();
    int end = size-1;

    while(start <= end){
        // step - 1
        swap(arr[start], arr[end]);
        // step - 2
        start++;
        // step - 3
        end--;
    }
    

}
int main(){
    vector<int> arr = {5,4,3,2,1};
    //call
    reverseArray(arr);
    // printing
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}