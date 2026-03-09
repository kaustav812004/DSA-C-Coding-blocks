#include<bits/stdc++.h>
using namespace std;
int maxsubarraysum(vector<int>& arr){
    int n = arr.size();
    int maxsum = INT_MIN;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum+=arr[j];
            maxsum = max(maxsum, sum);
        }
    }
    return maxsum;
}
int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxsubarraysum(arr);
}