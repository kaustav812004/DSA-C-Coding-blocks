#include<bits/stdc++.h>
using namespace std;

// int removeDuplicates(vector<int>& nums){
//     int n = nums.size();
//     int k = nums[0];
//     vector<int> arr;
//     arr.push_back(k);
//     for(int i = 1; i < n; i++){
//         if(nums[i] != k){
//             arr.push_back(nums[i]);
//             k = nums[i];
//         }
//     }
//     return arr.size();
// }
int removeDuplicates(vector<int>& nums){
    int n = nums.size();
    int k = 0;
    for(int i = 1; i < n; i++){
        if(nums[i] != nums[k]){
            k++;
            nums[k] = nums[i];
        }
    }
    return k+1;
}

int main(){
    vector<int> arr = {1,2,2,2,3,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,7};
    cout<<removeDuplicates(arr);
}