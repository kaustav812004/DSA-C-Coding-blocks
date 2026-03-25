#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;   //row
    int m;   //col
    cin>>n; 
    cin>>m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    // i -> row    j -> column
    //Traversal of a matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
