#include<bits/stdc++.h>
using namespace std;

int sumi(vector<int> arr){
    int sum= 0;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        sum+=arr[i];
    }
    return sum;
}

void printarray(vector<int> abc){
    int n = abc.size();
    for(int i = 0; i < n; i++){
        cout<<abc[i]<<" ";
    }
} 

int main(){
    // vector<int> arr = {1, 4, 2, 3};
    int n;
    cout<<"Enter size: ";
    cin>>n;

    vector<int> arr(n);
    printarray(arr);
    cout<<endl;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    printarray(arr);
    cout<<endl;
    cout<<sumi(arr);
}
