#include<bits/stdc++.h>
using namespace std;

double median(vector<int> nums1, vector<int> nums2){
    int n = nums1.size();
    int m = nums2.size();
    int sz = n+m;
    vector<int> arr;
    int i = 0, j = 0;
    while(i < n && j < m){
        if(nums1[i] < nums2[j]){
            arr.push_back(nums1[i]);
            i++;
        }
        else{
            arr.push_back(nums2[j]);
            j++;
        }
    }
    while(i < n) arr.push_back(nums1[i++]);
    while(j < m) arr.push_back(nums2[j++]);

    if(sz % 2 == 0){
        return double(arr[sz/2]+arr[sz/2-1])/2;
    }
    return arr[sz/2];
}

int main(){
    vector<int> nums1= {1,5,8,10};
    vector<int> nums2 = {2,7,12};
    cout<<median(nums1, nums2);
}