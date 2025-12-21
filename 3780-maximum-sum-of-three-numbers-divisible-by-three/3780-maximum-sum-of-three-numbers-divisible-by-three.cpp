class Solution {
public:
    int maximumSum(vector<int>& nums) {
      //  Possible combinations are 0 + 0 + 0, 1 + 1 + 1, 2 + 2 + 2, 0 + 1 + 2.
        vector<int> g0, g1, g2;

        for (int val : nums) {
            if (val % 3 == 0) g0.push_back(val);
            else if (val % 3 == 1) g1.push_back(val);
            else g2.push_back(val);
        }

        sort(g0.begin(), g0.end(), greater<int>());
        sort(g1.begin(), g1.end(), greater<int>());
        sort(g2.begin(), g2.end(), greater<int>());

        int ans = 0;

        // (0,0,0)
        if (g0.size() >= 3)
            ans = max(ans, g0[0] + g0[1] + g0[2]);

        // (1,1,1)
        if (g1.size() >= 3)
            ans = max(ans, g1[0] + g1[1] + g1[2]);

        // (2,2,2)
        if (g2.size() >= 3)
            ans = max(ans, g2[0] + g2[1] + g2[2]);

        // (0,1,2) // important
        if (g0.size() >= 1 && g1.size() >= 1 && g2.size() >= 1)
            ans = max(ans, g0[0] + g1[0] + g2[0]);

        return ans;
    }
};
