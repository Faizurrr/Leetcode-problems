class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> arr;
        int ans = 0;

        for (int i = 0; i < profit.size(); i++) {
            arr.push_back({profit[i], i}); 
        }

        sort(arr.begin(), arr.end());  

        for (int i = 0; i < worker.size(); i++) {
            for (int j = arr.size() - 1; j >= 0; j--) {  // insted of searching linearly we can search apply binary search 
                if (worker[i] >= difficulty[arr[j].second]) {
                    ans += arr[j].first;
                    break; 
                }
            }
        }

        return ans;
    }
};