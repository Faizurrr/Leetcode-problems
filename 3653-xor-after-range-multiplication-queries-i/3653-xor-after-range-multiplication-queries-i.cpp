class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        const int MOD = 1e9 + 7;

        for (int i = 0; i < queries.size(); i++) {
            int idx = queries[i][0];
            int ri  = queries[i][1];
            int ki  = queries[i][2];
            int vi  = queries[i][3];

            while (idx <= ri) {
                nums[idx] = (1LL * nums[idx] * vi) % MOD;
                idx += ki;
            }
        }

        long long ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            ans ^= nums[i];
        }

        return ans;
    }
};