class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       vector<int>ans;
        if (nums.empty()) return ans; // edge case.
     
        unordered_set<int> s(nums.begin(), nums.end());
       sort(nums.begin(),nums.end());
        int minRange = nums[0];
        int maxRange = nums[nums.size()-1];
         for (int i = minRange; i <= maxRange; i++) {
            if(s.find(i)==s.end()) { // if it not present (mising val);
                ans.push_back(i);
            }
        }
        return ans;
    }
};