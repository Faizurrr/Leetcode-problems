class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
       unordered_map<int , int>freq;
        for(int val : nums){
             freq[val]++;
        } 
         int n = nums.size();
          for(int val : nums){
             if(freq[val]==n/2){
                 return val;
             }
          }  
           return -1;
    }

    
};