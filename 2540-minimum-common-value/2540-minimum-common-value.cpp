// Brute force apporoch ..
// class Solution {
// public:
//     int getCommon(vector<int>& nums1, vector<int>& nums2) {
//          for(int i = 0; i <nums1.size(); i++){
//              for(int j = 0 ; j<nums2.size(); j++){
//                  if(nums1[i]==nums2[j]){
//                      return nums1[i];
//                  }
//              }
//          }
//           return -1;
//     }
// };
 // optimized Apporoch
  class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
         unordered_set<int>s(nums2.begin() , nums2.end());
         for(int i =0 ; i <nums1.size() ; i++){
             if(s.find(nums1[i])!=s.end()) { // if nums1 found in nums2
                 return nums1[i];                 
             }
         }
          return -1;
    }
  };