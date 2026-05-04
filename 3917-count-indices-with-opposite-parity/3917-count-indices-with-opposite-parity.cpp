class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
         vector<int>ans;
         for(int i =0 ; i<nums.size() ; i++) {
              int score =  0; 
             for(int j = i+1 ; j<nums.size() ; j++) {
                if(nums[i]%2==0 && nums[j]%2!=0 || nums[i]%2!=0 && nums[j]%2==0 ) {
                    score++;
                }
             }
              ans.push_back(score);
         } 
          return ans;
    }
};