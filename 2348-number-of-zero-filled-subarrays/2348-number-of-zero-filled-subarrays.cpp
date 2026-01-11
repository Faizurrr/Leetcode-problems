 // Brute Force Approch: which check every subarrays that is it valid (according to given problem ) or not. take high time for execution.(TLE)
// class Solution {
//     bool isValid(vector<int>& temp) {
//         for (int x : temp) {
//             if (x != 0) return false;
//         }
//         return true;
//     }

// public:
//     long long zeroFilledSubarray(vector<int>& nums) {
//         long long count = 0;

//         for (int i = 0; i < nums.size(); i++) {
//             vector<int> temp;
//             for (int j = i; j < nums.size(); j++) {
//                 temp.push_back(nums[j]);
//                 if (isValid(temp)) {
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };

//  optimize apporoch....
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count = 0;   // current consecutive zeros
        long long ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                count++;
                ans += count;
            } else {
                count = 0;
            }
        }
        return ans;
    }
};
