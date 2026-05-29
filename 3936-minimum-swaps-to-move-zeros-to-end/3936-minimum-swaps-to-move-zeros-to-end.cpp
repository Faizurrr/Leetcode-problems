class Solution {
public:
    int minimumSwaps(vector<int>& nums) {

        int zeros = 0;

        for (int val : nums) {
            if (val == 0) {
                zeros++;
            }
        }

        int swaps = zeros;

        for (int i = nums.size() - zeros; i < nums.size(); i++) {
            if (nums[i] == 0) {
                swaps--;
            }
        }

        return swaps;
    }
};