class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
       sort(nums.begin(), nums.end()); // sorting in assending order
        int n = nums.size()-1; // last index
       int ans = nums[n]+nums[n-1]-nums[0];
       return ans;
    }
};