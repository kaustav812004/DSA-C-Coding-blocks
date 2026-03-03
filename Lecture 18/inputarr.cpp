#include<bits/stdc++.h>
using namespace std;


void printArr(vector<int> arr){
    int n = arr.size();
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    printArr(arr);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    printArr(arr);
}