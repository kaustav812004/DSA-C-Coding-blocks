#include<bits/stdc++.h>
using namespace std;

void reverseArr(vector<int>& arr, int l, int r){
    while(l < r){
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
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
    int l = 2;
    int r = 5;
    cout<<endl;
    cout<<"reverse Array: "<<endl;
    reverseArr(arr, l, r);
    print(arr);
}