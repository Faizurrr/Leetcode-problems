class Solution {
public:
    int minMoves(vector<int>& nums) {
          int ans = 0;
           int maxelement = *max_element(nums.begin() , nums.end());
        // oporoche : find max element & then check every element find difference between max element and that element
          for(int i =0; i<nums.size();i++) {
               ans+=abs(maxelement - nums[i]);
          }
           return ans;
    }
};