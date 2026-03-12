#include<bits/stdc++.h>
using namespace std;

void sortcolor(vector<int>& arr){
    int n = arr.size();
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            cnt0++;
        }
        else if(arr[i] == 1){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    int idx = 0;
    while(idx < cnt0){
        arr[idx] = 0;
        idx++;
    }
    while(idx < cnt0+cnt1){
        arr[idx] = 1;
        idx++;
    }
    while(idx < cnt0+cnt1+cnt2){
        arr[idx] = 2;
        idx++;
    }
}

void print(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr = {1,2,0,1,2,0,0,2,2,1,1};
    print(arr);
    cout<<endl;
    sortcolor(arr);
    print(arr);
}