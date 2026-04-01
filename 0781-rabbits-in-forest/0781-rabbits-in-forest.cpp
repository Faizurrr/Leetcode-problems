class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> mp;
        
        // Count frequency
        for (int x : answers) {
            mp[x]++;
        }
        
        int ans = 0;
        
        for (auto it : mp) {
            int x = it.first;
            int freq = it.second;
            
            int groupSize = x + 1;
            
            // number of groups needed
            int groups = (freq + groupSize - 1) / groupSize;
            
            ans += groups * groupSize;
        }
        
        return ans;
    }
};