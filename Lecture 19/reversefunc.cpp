#include<bits/stdc++.h>
using namespace std;

void print(vector<int> abc){
    int n = abc.size();
    for(int i = 0; i < n; i++){
        cout<<abc[i]<<" ";
    }
}

int main(){
    vector<int> arr ={6, 3, 4, 1, 2, 10, 12};
    print(arr);
    cout<<endl;
    cout<<"reverse Array: "<<endl;
    reverse(arr.begin(), arr.end());
    print(arr);
    cout<<endl;
    cout<<"Sorted Array: "<<endl;
    sort(arr.begin(), arr.end());
    print(arr);
}