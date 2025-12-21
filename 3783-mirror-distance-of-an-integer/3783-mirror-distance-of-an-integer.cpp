class Solution {
public:
       int reversed(int n ) {
           int reversednum = 0;
              while(n>0) {
                    int lastdigit = n%10;
                    n/=10;
                   reversednum = reversednum*10+lastdigit;
              }
               return reversednum;
        
       }
    int mirrorDistance(int n) {
        int ans = abs(n-reversed(n));
        return ans;
    }
};