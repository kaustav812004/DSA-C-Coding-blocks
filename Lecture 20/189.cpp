class Solution {
public:
    void reverse(vector<int>& arr, int l, int r){
        while(l < r){
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums, 0, n-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, n-1);
    }
};

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k %= n;
//         for (int i = 0; i < k; i++) {
//             int last = nums[n - 1];
//             for (int j = n - 1; j > 0; j--) {
//                 nums[j] = nums[j - 1];
//             }
//             nums[0] = last;
//         }
//     }
// };