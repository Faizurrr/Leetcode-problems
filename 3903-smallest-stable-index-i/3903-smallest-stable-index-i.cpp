class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans = -1;
         for(int i = 0; i<nums.size();i++){
             int maxNum = INT_MIN;
             int minNum = INT_MAX;
              // maxVal [0....i]....
              for(int j = 0 ; j<=i ; j++){
                  maxNum = max(maxNum , nums[j]);
              }
                  // maxVal [i....n-1]....
                 for(int k = i; k<nums.size() ; k++){
                  minNum = min(minNum  , nums[k]);
              }
               if(maxNum - minNum<=k){
                 ans = i;
                 return ans; 
                 
               }
               
         }
          return ans;
    }
};