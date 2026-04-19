//  Brute force apporoch...(check every pair those who are valid calculate their distance and then final calculate the final distance among them )......
//  class Solution {
// public:
//     int maxDistance(vector<int>& nums1, vector<int>& nums2) {
//          int maxDist = INT_MIN;
//         for(int i = 0 ; i<nums1.size(); i++){
//              for(int j =i  ; j<nums2.size(); j++){
//                  if(nums1[i]<=nums2[j]){
//                      maxDist = max(maxDist , abs(j-i));
                     
//                  }
//              }
//         }
//              return maxDist;
        
//     }
// };
   // optimize apporoch ... (the code that was written by me Apporoch was mine but have multiple syntaxual error )
//  class Solution {
// public:
//     int maxDistance(vector<int>& nums1, vector<int>& nums2) {
//          int maxDist = 0;
//         for(int i = 0 ; i<nums1.size(); i++){
//             int target = nums1[i];
//              int str = i;
//               int end = nums2.size()-1;
//               // binary search apporoch....
//                while(end>=str){
//                  int mid= str+end/2;
//                   if(nums2[mid]==target){
//                     int dist = mid - i;  
//                   }else if(nums2[mid]<nums[i]){
//                      end = mid-1;
//                   }else{
//                      str = mid+1;
//                   }
//                   maxDist = max(maxDist , dist);
//                }
//         return maxDist;
        
//     }
// };
 // this code is written by chatgpt..
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxDist = 0;

        for (int i = 0; i < nums1.size(); i++) {
            int low = i;
            int high = nums2.size() - 1;

            while (low <= high) {
                int mid = low + (high - low) / 2;

                if (nums2[mid] >= nums1[i]) {
                    maxDist = max(maxDist, mid - i);
                    low = mid + 1;  // try farther
                } else {
                    high = mid - 1;
                }
            }
        }

        return maxDist;
    }
};