#include<bits/stdc++.h> 
using namespace std;
int maxi(vector<int> arr){
    int n = arr.size();
    int mx = arr[0];
    for(int i = 1; i < n; i++){
        if(mx < arr[i]){
            mx = arr[i];
        }
    }
    return mx;
}

int mini(vector<int> arr){
    int n = arr.size();
    int mn = arr[0];
    for(int i = 1; i < n; i++){
        if(mn > arr[i]){
            mn = arr[i];
        }
    }
    return mn;
}

int main(){
    vector<int>arr = {1, 3, 6, 2, -2, -9};
    cout<<maxi(arr)<<endl;
    cout<<mini(arr)<<endl;
}
