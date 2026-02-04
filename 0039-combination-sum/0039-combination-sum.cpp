class Solution {
public:

    void Combinational_sum(vector<vector<int>>& ans,
                           vector<int>& temp,
                           vector<int>& candidates,
                           int i,
                           int target,
                           int sum) {

        // Base cases
        if (sum == target) {
            ans.push_back(temp);
            return;
        }

        if (i >= candidates.size() || sum > target) { // otherbase case...
            return;
        }

      
        temp.push_back(candidates[i]);
        Combinational_sum(ans, temp, candidates, i, target, sum + candidates[i]);
        temp.pop_back();  // backtrack


        Combinational_sum(ans, temp, candidates, i + 1, target, sum);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;

        Combinational_sum(ans, temp, candidates, 0, target, 0);
        return ans;
    }
};
