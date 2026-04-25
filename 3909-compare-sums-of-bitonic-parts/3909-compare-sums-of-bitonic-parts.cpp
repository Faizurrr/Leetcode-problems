class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
         int peakIndx = -1;
         for(int i = 1 ; i<nums.size();i++){
             if(nums[i]>nums[i-1]){
                 peakIndx = i;
             }
         }
          
      vector<int>assending;
       vector<int>descending;

        for(int  i = 0 ; i <=peakIndx; i++) { // Assending part .........
                 assending.push_back(nums[i]);
             }
              for(int  i = peakIndx ; i <nums.size(); i++) { // descending part.......
                 descending.push_back(nums[i]);
             }

     
       long long  sum1 = 0;
       for(int i = 0 ; i<assending.size(); i++){
             sum1+=assending[i];
       }
        long long  sum2 = 0;
       for(int i = 0 ; i<descending.size(); i++){
             sum2+=descending[i];
       }
        if(sum1>sum2){
             return 0;
        }else if(sum2>sum1){
             return 1;
        }
        return -1;
    }
};