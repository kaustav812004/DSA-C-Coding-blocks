#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> arr = {
                                {1,2,3},
                                {4,5,6},
                                {7,8,9},
                                {10,11,12}
                            };
    // cout<<arr[0][0]<<endl; //accessing matrix element
    int n = arr.size();
    int m = arr[0].size();
    // cout<<n<<" "<<m;
    // i -> row    j -> column
    //Traversal
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
