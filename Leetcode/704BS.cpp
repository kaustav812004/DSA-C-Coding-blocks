int binsearch(vector<int>& arr, int x){
    int n = arr.size();
    int l = 0;
    int r = n-1;
    while(l <= r){
        int mid = l+(r-l)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] < x){
            l = mid+1;
        }
        else r = mid-1;
    }
    return -1;
}