class Solution {
public:
    int sumi(vector<int>& nums){
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            sum+=nums[i];
        }
        return sum;
    }
    int pivotIndex(vector<int>& nums) {
        int total = sumi(nums);
        int leftTotal = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int rightTotal = total - leftTotal - nums[i];
            if (rightTotal == leftTotal) {
                return i;
            }
            leftTotal += nums[i];
        }

        return -1;        
    }
};
