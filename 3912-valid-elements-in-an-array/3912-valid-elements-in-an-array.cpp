class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

       
        vector<int> suffix(n);
        suffix[n - 1] = nums[n - 1];

        int maxElement = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            maxElement = max(nums[i], maxElement);
            suffix[i] = maxElement;
        }

        
        int leftMax = INT_MIN;

        for (int i = 0; i < n; i++) {
            int current = nums[i];

            // first and last always valid
            if (i == 0 || i == n - 1) {
                ans.push_back(current);
            }
            // greater than all left
            else if (current > leftMax) {
                ans.push_back(current);
            }
            // greater than all right
            else if (current > suffix[i + 1]) {
                ans.push_back(current);
            }

            leftMax = max(leftMax, current);
        }

        return ans;
    }
};