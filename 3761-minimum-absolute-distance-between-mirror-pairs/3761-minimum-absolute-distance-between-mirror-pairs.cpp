  // Brute force apporoch ....

//  class Solution {
//     public:
    
//           int reversed(int num){
//         int reversedval = 0;
//         while (num != 0) {
//             int lastdigit = num % 10;
//             reversedval = reversedval * 10 + lastdigit;
//             num /= 10;
//         }
//         return reversedval;
//     }
       
//      int minMirrorPairDistance(vector<int>& nums) {
//               int minDist = INT_MAX; 
//             for(int i = 0 ;i <nums.size()-1; i++){
//                  int rev = reversed(nums[i]);
//                 int dist = 0 ;
//                  for(int j = i+1 ; j<nums.size(); j++){
//                        if( rev == nums[j]) {
//                              dist = j-i;
//                               minDist = min(dist , minDist);
//                              break;
//                        } 
                        
                         
                       
//                  }
//             }
//              if(minDist == INT_MAX){
//                    return -1;
//              } 
//              return minDist;
//       } 
//  };



  //optimize apporoch -1.

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
  //  optimize apporoch-2
//   class Solution {
// public:
//     int reversed(int num) {
//         int reversedval = 0;
//         while (num != 0) {
//             int lastdigit = num % 10;
//             reversedval = reversedval * 10 + lastdigit;
//             num /= 10;
//         }
//         return reversedval;
//     }

//     int minMirrorPairDistance(vector<int>& nums) {
//         unordered_map<int, int> mp;

     
//         for (int i = 0; i < nums.size(); i++) {
//             mp[nums[i]] = i;
//         }

//         int ans = INT_MAX;

//         for (int j = 0; j < nums.size(); j++) {
//             int rev = reversed(nums[j]);

//             if (mp.find(rev) != mp.end() && mp[rev] != j) {
//                 ans = min(ans, abs(j - mp[rev]));
//             }
//         }

//         return (ans == INT_MAX) ? -1 : ans;
//     }
// };