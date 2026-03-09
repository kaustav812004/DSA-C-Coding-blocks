#include<bits/stdc++.h>
using namespace std;
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int ele;
        for(int i = 0; i < n; i++){
            if(cnt == 0){
                ele = nums[i];
                cnt++;
            }
            else if(nums[i] == ele){
                cnt++;
            }
            else cnt--;
        }
        int cntele = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == ele) cntele++;
        }
        if(cntele > n/2) return ele;
        return -1;
    }

int main(){
    vector<int> arr = {1,1,2,3,2,3,1,2,4,1};
    cout<<majorityElement(arr);
}