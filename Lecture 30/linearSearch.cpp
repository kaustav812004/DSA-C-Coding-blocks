#include<bits/stdc++.h>
using namespace std;
bool linsearch(vector<vector<int>>& mat, int key){
    int n = mat.size();
    int m = mat.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] == key) return true;
        }
    }
    return false;
}

// T.C = O(nm)

int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int key = 30;
    cout<<linsearch(matrix, key);
    
}