#include<iostream> 
#include<vector>

using namespace std;
int main(){
    int arr[] = {1,3,5,7,9};
    int sizea = 5;
    int brr[] = {2,4,6,8};
    int sizeb = 4;
    int crr[] = {10,11,12,13,14,15};
    int sizec = 6;

    //Create a vector
    vector<int> ans;
    // push all element is vector arr
    for(int i=0; i<sizea; i++){
        ans.push_back(arr[i]);
    }

    //push all elements in vector brr
    for(int i=0; i<sizeb; i++){
        ans.push_back(brr[i]);
    }

    //push all elements in vector crr
    for(int i=0; i<sizec; i++){
        ans.push_back(crr[i]);
    }

    //Print ans

    cout<<"Print ans array"<<endl;

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}