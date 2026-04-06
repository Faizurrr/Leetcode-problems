class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        vector<int> cont;
        vector<int> ans;

        // generate all possible sums
        for (int a = 1; a * a * a <= n; a++) {
            for (int b = a; a * a * a + b * b * b <= n; b++) {
                int val = a * a * a + b * b * b;
                cont.push_back(val);
            }
        }

        // count frequency
        unordered_map<int, int> freq;
        for (int val : cont) {
            freq[val]++;
        }

        // collect good integers
        for (auto &it : freq) {
            if (it.second >= 2) {
                ans.push_back(it.first);
            }
        }

        // sort result
        sort(ans.begin(), ans.end());

        return ans;
    }
};