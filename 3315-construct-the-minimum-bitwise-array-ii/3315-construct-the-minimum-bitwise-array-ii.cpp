// class Solution {
// public:
//     vector<int> minBitwiseArray(vector<int>& nums) {
//         // this approch is 100%  correct but will take high time for execution..
//         int n = nums.size();
//          vector<int> ans(n, -1);
//         for (int i = 0; i < n; i++) {
//             if (nums[i] % 2 == 0) continue;
//             int val = 0;
//             while ( (val | (val + 1)) != nums[i] ) {
//                 val++;
//             }
//             ans[i] = val;
//         }

//         return ans;
//     }
// };
 // it optimize apporoch-> if we find minimum val of x in below equation 
 // equation : x|x+1 == nums[i] , where nums[i] is prime number.
  class Solution {
public:
    int countTrailingOnes(int n) { // funtion which count no of trailing once in the binary repersentation 
        int cnt = 0;
        while ((n & 1) == 1) {
            cnt++;
            n >>= 1;
        }
        return cnt;
    }

    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);

        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) continue; // even → impossible

            int k = countTrailingOnes(nums[i]);

            // minimum x
            ans[i] = nums[i] - (1 << (k - 1));
        }

        return ans;
    }
};
