class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();

        // Count number of 1s
        int count1 = 0;
        for (int x : nums) {
            if (x == 1) count1++;
        }

        // Case 1: already has 1
        if (count1 > 0) {  // bcz we know gcd with 1 always gives 1 .. 
            return n - count1;
        }

        // Case 2: find smallest subarray with gcd = 1
        int minLen = INT_MAX; 

        for (int i = 0; i < n; i++) {
            int g = nums[i];
            for (int j = i; j < n; j++) {
                g = gcd(g, nums[j]);
                if (g == 1) {
                    minLen = min(minLen, j - i + 1);
                    break;
                }
            }
        }

        // If no subarray gives gcd = 1
        if (minLen == INT_MAX) return -1;

        return (minLen - 1) + (n - 1);
    }
};