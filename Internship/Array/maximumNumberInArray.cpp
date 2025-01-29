// #include<iostream>
// #include<limits.h>
// using namespace std;

// int main(){
//     int arr[] = {2,4,3,5,6,7,8,10};
//     int size = 8;
//     int maxi = INT_MIN;
//     for(int i=0; i<size; i++){
//         if(arr[i] > maxi){
//             maxi = arr[i];
//         }
//     }
//     cout<<"Maximum number is "<<maxi<<endl;
// }







// Second method
#include<iostream>
#include<vector>

using namespace std;

int largest(vector<int>& arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

int main() {
    vector<int> arr = {10, 324, 45, 90, 9808};
    cout << largest(arr);
    return 0;
}