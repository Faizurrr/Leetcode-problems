class Solution {
public:
 int countElements(vector<int>& nums, int k) {
    //      int ans =0;
    //    for(int i =0; i<nums.size();i++) {
    //     int tempcount =0;
    //       for(int j =0; j<nums.size();j++) {   
    //          if(nums[i]<nums[j]) {
    //                tempcount++;
    //          }
    //    } 
    //    if(tempcount>=k){
    //     ans++;
    //    }
    // }
    //  return ans;
    //  
   if(k == 0) return nums.size();

    sort(nums.begin(), nums.end());
    int n = nums.size();
    int ans = 0;

    for(int i = 0; i < n; i++) {
        // Find number of elements strictly greater than nums[i]
        int greater = n - (upper_bound(nums.begin(), nums.end(), nums[i]) - nums.begin());
        
        if(greater >= k) ans++;
    }

    return ans;

    }
};