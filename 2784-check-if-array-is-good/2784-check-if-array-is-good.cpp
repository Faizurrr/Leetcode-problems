class Solution {
public:
    bool isGood(vector<int>& nums) {
       sort(nums.begin() , nums.end());
         int n = nums.size();
          int base = nums[n-1];
             if(n!=(base+1)){
                 return false;
             }
              if(n<3){
                 if(nums[0]!=base || nums[1]!=base){
                     return false;
                 }
              }
              for(int i =0; i <nums.size()-2; i++){
                if(nums[i]!=i+1) {
                     return false;
                }
                 
              }
          if(nums[n-1]!= base || nums[n-2]!= base ){
             return false;
          }       
           return true;        
    }
};