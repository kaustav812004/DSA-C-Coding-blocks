#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>&arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1],
        // that are greater than key, to 
        // one position ahead of their 
        // current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        arr[j + 1] = key;
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
    insertionSort(arr);
    print(arr);
}