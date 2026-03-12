#include<bits/stdc++.h>
using namespace std;

bool monotone(vector<int>& arr){
    int n = arr.size();
    bool inc = true;
    bool dec = true;
    for(int i = 0; i < n-1; i++){
        if(arr[i] < arr[i+1]){
            dec = false;
        }
        else if(arr[i] > arr[i+1]){
            inc = false;
        }
    }
    return inc || dec;
}

int main(){
    vector<int> arr = {1,4,6,8,10,12,19};   //monotonic increasing
    vector<int> ans = {19,12,10,6,3,0,-3};   //montonic decreasing
    vector<int> nums = {100,33,25,67,12,1};   //non-monotonic
    vector<int> abc = {2,2,2,2,2,2,2,2};
    cout<<monotone(arr)<<endl;
    cout<<monotone(ans)<<endl;
    cout<<monotone(nums)<<endl;
    cout<<monotone(abc)<<endl;
}