class Solution {
public:
   // very simple algorithms :
 // “For any number, if it is not divisible by 3, then either adding 1 or subtracting 1 will make it divisible by 3.”
    int minimumOperations(vector<int>& nums) {
         int count =0;
     
        for(int i =0 ; i<nums.size();i++) {
            if(nums[i]%3!=0){  
             count++;
            } 
        }
         return count;
    }
};