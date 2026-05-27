class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {

        vector<int> ans;
        unordered_map<int, int> freq;

        // count frequency
        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        // traverse map
        for(auto it : freq) {

            // if frequency >= k
            if(freq[it.first] >= k) {

                for(int i = 1; i <= k; i++) {
                    ans.push_back(it.first);
                }

            }
            else {

                for(int i = 1; i <= freq[it.first]; i++) {
                    ans.push_back(it.first);
                }
            }
        }
       sort(ans.begin() , ans.end());
        return ans;
    }
};