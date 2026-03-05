vector<int> sort(vector<int>& arr){
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
    return arr; 
}