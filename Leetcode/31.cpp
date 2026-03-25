#include<bits/stdc++.h>
using namespace std;

void nextpermutation(vector<int>& arr){
    int n = arr.size();
    int idx = -1;
    for(int i = n-2; i >= 0; i--){
        if(arr[i] < arr[i+1]){
            idx = i;
            break;
        }
    }
    if(idx == -1){
        reverse(arr.begin(), arr.end());
        return;
    }
    for(int i = n-1;i > idx; i--){
        if(arr[i] > arr[idx]){
            swap(arr[i], arr[idx]);
            break;
        }
    }
    reverse(arr.begin()+idx+1, arr.end());
}

int main(){
    vector<int> arr = {2, 1, 3, 5, 4, 0, 0};
    nextpermutation(arr);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
