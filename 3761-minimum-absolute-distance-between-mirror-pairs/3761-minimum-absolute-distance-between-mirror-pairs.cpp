class Solution {
public:
    int reversed(int num){
        int reversedval = 0;
        while (num != 0) {
            int lastdigit = num % 10;
            reversedval = reversedval * 10 + lastdigit;
            num /= 10;
        }
        return reversedval;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        int ans = INT_MAX;
        unordered_map<int, int> mp; // map: value -> most recent index i where reverse(nums[i]) == key

        for (int j = 0; j < nums.size(); j++) {
            
            if (mp.find(nums[j]) != mp.end()) {
                ans = min(ans, j - mp[nums[j]]);
            }

            // store/update most recent index for reverse(nums[j])
            int rev = reversed(nums[j]);
            mp[rev] = j; // overwrite to keep the latest index
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
