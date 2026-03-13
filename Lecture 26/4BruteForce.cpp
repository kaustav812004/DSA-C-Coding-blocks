#include<bits/stdc++.h>
using namespace std;

double median(vector<int> nums1, vector<int> nums2){
    int n = nums1.size();
    int m = nums2.size();
    int sz = n+m;
    for(int i = 0; i < m; i++){
        nums1.push_back(nums2[i]);
    }
    sort(nums1.begin(), nums1.end());
    if(sz % 2 == 0){
        return (nums1[sz/2]+nums1[sz/2-1])/2;
    }
    return nums1[sz/2];
}

int main(){
    vector<int> nums1= {1,5,8,10};
    vector<int> nums2 = {2,7,12};
    cout<<median(nums1, nums2);
}