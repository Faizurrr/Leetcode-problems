class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
            long long minval= nums[0];
            long long  maxval = nums[nums.size()-1];
            long long val = maxval-minval;
            return k*val;
        }
    
};