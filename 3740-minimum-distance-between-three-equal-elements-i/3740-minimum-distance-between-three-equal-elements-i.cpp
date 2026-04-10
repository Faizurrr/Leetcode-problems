class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int minpos = INT_MAX;
       if(nums.size() < 3) return -1; // edge cases..
        vector<pair<int,int>> ans;
        for(int i = 0; i < nums.size(); i++) {
            ans.push_back({nums[i], i});
        }

        sort(ans.begin(), ans.end());

        for(int i = 0; i < ans.size() - 2; i++) {
            if(ans[i].first == ans[i+1].first && ans[i+1].first == ans[i+2].first) {

                int dist = abs(ans[i].second - ans[i+1].second)
                         + abs(ans[i+1].second - ans[i+2].second)
                         + abs(ans[i+2].second - ans[i].second);

                minpos = min(minpos, dist);
            }
        }

        return (minpos == INT_MAX) ? -1 : minpos;
    }
};