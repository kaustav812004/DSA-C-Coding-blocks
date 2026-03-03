#include<bits/stdc++.h>
using namespace std;


// void printArr(vector<int> arr){
//     int n = arr.size();
//     for(int i = n-1; i >= 0; i--){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

void printArr(vector<int>& arr){
    int n = arr.size();
    int l = 0;
    int r = n-1;
    while(l < r){
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
    // return arr;
}
void print(vector<int> abc){
    int n = abc.size();
    for(int i = 0; i < n; i++){
        cout<<abc[i]<<" ";
    }
}

int main(){
    vector<int> arr ={1, 2, 3, 4, 5, 7};
    print(arr);
    cout<<endl;
    cout<<"reverse Array: "<<endl;
    printArr(arr);
    print(arr);
}