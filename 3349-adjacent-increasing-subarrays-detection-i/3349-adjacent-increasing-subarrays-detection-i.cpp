class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {

        int n = nums.size();

        for(int a = 0; a <= n - 2*k; a++) {

            bool first = true;
            bool second = true;

            // check first subarray [a ... a+k-1]
            for(int i = a; i < a + k - 1; i++) {
                if(nums[i] >= nums[i+1]) {
                    first = false;
                    break;
                }
            }

            // check second subarray [a+k ... a+2k-1]
            for(int i = a + k; i < a + 2*k - 1; i++) {
                if(nums[i] >= nums[i+1]) {
                    second = false;
                    break;
                }
            }

            if(first && second) return true;
        }

        return false;
    }
};