class Solution {
public:
    int minElement(vector<int>& nums) {
          int minSum = INT_MAX;;
        for(int i = 0 ; i<nums.size() ; i++){
             int number = nums[i];
             int sum = 0;
              while(number!=0){
                 int digit = number%10;
                 number/=10;
                  sum+=digit;
                  
              }
               minSum = min(minSum , sum);
        }
         return minSum;
    }
};