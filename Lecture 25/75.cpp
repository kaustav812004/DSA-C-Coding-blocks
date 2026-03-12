#include<bits/stdc++.h>
using namespace std;

//Dutch National Flag Algortithm
void sortcolor(vector<int>& arr){
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}

void print(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr = {1,0,2,0,0,1,2,1,0,2};
    print(arr);
    cout<<endl;
    sortcolor(arr);
    print(arr);
}
