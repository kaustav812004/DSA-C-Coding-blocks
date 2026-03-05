#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for(int i = 1; i < n; i++){
        for(int j = 0; j <= n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// void bubbleSort(vector<int>& arr){
//     int n = arr.size();
//     for(int i = 1; i < n; i++){
//         bool swapped = false;
//         for(int j = 0; j <= n-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 swapped = true;
//             }
//         }
//         if(!swapped) break;
//     }
// }

void print(vector<int> abc){
    int n = abc.size();
    for(int i = 0; i < n; i++){
        cout<<abc[i]<<" ";
    }
}

int main(){
    vector<int> arr = {6, 1, 2, 3};
    print(arr);
    cout<<endl;
    cout<<"Sorted: "<<endl;
    bubbleSort(arr);
    print(arr);
}
