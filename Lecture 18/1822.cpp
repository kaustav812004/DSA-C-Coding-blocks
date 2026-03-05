class Solution {
public:
    int arraySign(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                arr[i] = 1;
            }
            else if(arr[i] < 0){
                arr[i] = -1;
            }
        }
        int prod = 1;
        for(int i = 0; i < n; i++){
            prod *= arr[i];
        }
        
        return prod;
    }
};