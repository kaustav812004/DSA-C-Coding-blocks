#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& height){
    int n = height.size();
    vector<int> prefmax(n);
    vector<int> sufmax(n);
    prefmax[0] = height[0];
    sufmax[n-1] = height[n-1];
    int water = 0;
    for(int i = 1; i < n; i++){
        prefmax[i] = max(height[i], prefmax[i-1]);
    }
    for(int i = n-2; i >= 0; i--){
        sufmax[i] = max(height[i], sufmax[i+1]);
    }
    for(int i = 0; i < n; i++){
        int maxleft = prefmax[i];
        int maxright = sufmax[i];
        int minheight = min(maxleft, maxright);
        water += minheight-height[i];
    }
    return water;
}

int main(){
    vector<int> height= {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(height);
}