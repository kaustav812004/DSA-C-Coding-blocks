#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>  transpose(vector<vector<int>> mat){
    int n = mat.size(); //row
    int m = mat[0].size(); //col
    vector<vector<int>> res(m, vector<int>(n, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            res[i][j] = mat[j][i];
        }
    }
    return res;
}

void printmatrix(vector<vector<int>> mat){
    int n = mat.size();
    int m = mat[0].size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> arr = {
                                {1,2,3},
                                {4,5,6},
                                {7,8,9},
                                {10,11,12}
                            };
    printmatrix(arr);
    cout<<endl;
    cout<<"Transpose: ";
    vector<vector<int>>res(3, vector<int>(4, 0));
    res = transpose(arr);
    printmatrix(res);
}