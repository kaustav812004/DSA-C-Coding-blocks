#include<bits/stdc++.h>
using namespace std;


void printarray(vector<int> abc){
    int n = abc.size();
    for(int i = 0; i < n; i++){
        cout<<abc[i]<<" ";
    }
} 

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    printarray(arr);
    cout<<endl;
    //Accessing your array elemts
    cout<<arr[0]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[5]<<endl;
    //Update your array
    arr[3] = 79;
    cout<<arr[3]<<endl;
    //Size of array
    int n =arr.size();
    cout<<n<<endl;
    //Delete last lement of array
    arr.pop_back();
    cout<<arr.size()<<endl;
    // Insert at back of array
    arr.push_back(34);
    cout<<arr[5]<<endl;
    n = arr.size();
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }
    printarray(arr);
}
