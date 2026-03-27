#include<bits/stdc++.h>
using namespace std;

// T.C = O(nxm)
vector<int> spiral(vector<vector<int>>& mat){
    int n = mat.size();
    int m = mat[0].size();
    vector<int>arr;
    int left = 0, right = m-1, top = 0, bottom = n-1;
    while(left <= right && top <= bottom){
        for(int i = left; i <= right; i++){
            arr.push_back(mat[top][i]);
        }
        top++;
        for(int i = top; i <= bottom; i++){
            arr.push_back(mat[i][right]);
        }
        right--;
        if(top <= bottom){
            for(int i = right; i >= left; i--){
                arr.push_back(mat[bottom][i]);
            }
            bottom--;
        }
        if(left <= right){
            for(int i = bottom; i >= top; i--){
                arr.push_back(mat[i][left]);
            }
            left++;
        }
    }
    return arr;
}

int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    vector<int> arr = spiral(matrix);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
}
