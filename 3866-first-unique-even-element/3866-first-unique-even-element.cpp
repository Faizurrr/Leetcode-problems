class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
         int ans = -1;
       unordered_map<int , int>freq;
        for(int val : nums) {
             freq[val]++;
        }
          for(int val:  nums) {
             if(freq[val]==1 && val%2==0) {
                 ans = val;
                 break;
             }
          }
          return ans;
    }
};