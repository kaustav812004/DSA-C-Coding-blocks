#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i <= n-2; i++){
        int min_idx = i;
        for(int j = i+1; j <= n-1; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
}


void print(vector<int> abc){
    int n = abc.size();
    for(int i = 0; i < n; i++){
        cout<<abc[i]<<" ";
    }
}

int main(){
    vector<int> arr = {6, 5, 10, 1, 2, 3};
    print(arr);
    cout<<endl;
    cout<<"Sorted: "<<endl;
    selectionSort(arr);
    print(arr);
}