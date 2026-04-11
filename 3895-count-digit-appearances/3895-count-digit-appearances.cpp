class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
         // time complexity = O(Olog(n)) ; 
         int count = 0;
          for(int i =0 ; i<nums.size(); i++) { 
              while(nums[i]>0) { 
                 int ldigit = nums[i]%10;
                  nums[i]/=10;
             if(ldigit == digit) {
                 count++;
                  
             }
              } 
          }
           return count ; 
          
    }
};