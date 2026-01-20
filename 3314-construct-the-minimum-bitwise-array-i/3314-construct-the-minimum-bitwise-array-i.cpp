class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);

        for (int i = 0; i < n; i++) {
            int x = nums[i];

            // even → impossible
            if ((x & 1) == 0) {
                ans[i] = -1;
                continue;
            }

            // count trailing 1s
            int k = __builtin_ctz(~x);

            // smallest x
            ans[i] = x - (1 << (k - 1));
        }

        return ans;
    }
};
