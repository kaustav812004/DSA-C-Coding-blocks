#include<bits/stdc++.h>
using namespace std;

void multiply(vector<vector<int>> A, vector<vector<int>> B){
    int n1 = A.size(), m1 = A[0].size(), n2 = B.size(), m2 = B[0].size();
    if(m1 != n2){
        cout<<"Invalid"<<endl;
        return;
    }
    vector<vector<int>> C(n1, vector<int>(m2, 0));
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < m2; j++){
            for(int k = 0; k < m1; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < m2; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}
// T.C =O(n^3)

int main(){
    vector<vector<int>> A = {{1,2,3,7},{4,5,6,8}};
    vector<vector<int>> B = {{1},{0},{-1},{2}};
    multiply(A, B);
}