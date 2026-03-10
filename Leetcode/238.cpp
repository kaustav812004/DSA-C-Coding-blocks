#include<bits/stdc++.h>
using namespace std;

// vector<int> product(vector<int>& arr){
//     int n = arr.size();
//     vector<int> ans;
//     for(int i = 0; i < n; i++){
//         int prod = 1;
//         for(int j = 0; j < n; j++){
//             if(i != j){
//                 prod *= arr[j];
//             }
//         }
//         ans.push_back(prod);
//     }
//     return ans;
// }

vector<int> product(vector<int>& arr){
    int n = arr.size();
    vector<int> pref(n, 1);
    vector<int> suff(n, 1);
    vector<int> ans(n);
    for(int i = 1; i < n; i++){
        pref[i] = arr[i-1]*pref[i-1];
    }
    for(int i = n-2; i >= 0; i--){
        suff[i] = suff[i+1]*arr[i+1];
    }
    for(int i = 0; i < n; i++){
        ans[i] = pref[i]*suff[i];
    }
    return ans;
}

void print(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr = {-3, 0, 3, 1, -1, 2};
    vector<int> ans = product(arr);
    print(arr);
    cout<<endl;
    print(ans);
}