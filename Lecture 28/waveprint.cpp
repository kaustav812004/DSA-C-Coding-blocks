#include<bits/stdc++.h>
using namespace std;

void waveprint(vector<vector<int>> mat){
    int n = mat.size();
    int m = mat[0].size();
    for(int j = 0; j < m; j++){
        if(j % 2 == 0){
            for(int i = 0; i < n; i++){
                cout<<mat[i][j]<<" ";
            }
        }
        else{
            for(int i = n-1; i >= 0; i--){
                cout<<mat[i][j]<<" ";
            }
        }
    }
}

int main(){
    vector<vector<int>> arr = {
                                {1,2,3},
                                {4,5,6},
                                {7,8,9},
                                {10,11,12}
                            };
    waveprint(arr);
}