#include <iostream>
#include <vector>
using namespace std;

long long countSubarrays(vector<int>& arr, long long k) {
    if (k <= 1) return 0; // important edge case
    
    long long product = 1;
    long long count = 0;
    int left = 0;
    
    for (int right = 0; right < arr.size(); right++) {
        product *= arr[right];
        
        while (product >= k) {
            product /= arr[left];
            left++;
        }
        
        count += (right - left + 1);
    }
    
    return count;
}

int main() {
    int n;
    cin >> n;
    
    long long k;
    cin >> k;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << countSubarrays(arr, k);
    
    return 0;
}