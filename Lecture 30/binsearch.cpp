#include<bits/stdc++.h>
using namespace std;
bool binsearch(vector<vector<int>>& mat, int key){
    int n = mat.size();
    int m = mat.size();
    int row = 0, col = m-1;
    while(row < n && col >= 0){
        if(mat[row][col] == key) return true;
        else if(mat[row][col] > key) col--;
        else row++;
    }
    return false;
}
// T.C = O(log(nm))

int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int key = 30;
    cout<<binsearch(matrix, key);
    
}