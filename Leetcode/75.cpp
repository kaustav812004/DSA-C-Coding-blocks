#include<bits/stdc++.h>
using namespace std;


//Dutch National Flag Algorithm
void sortcolor(vector<int>& arr){
    int n = arr.size();
    int low = 0,mid = 0, high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
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
    vector<int> arr = {1,2,0,1,2,0,0,2,2,1,1};
    print(arr);
    cout<<endl;
    sortcolor(arr);
    print(arr);
}