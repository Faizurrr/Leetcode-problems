class Solution {
public:
    int minAllOneMultiple(int k) {
         
             if (k==2 || k==5) { // the number which consist only 1 its will never divisble by 2 & 5
            return -1;
             }
         int rem =0;
          for(int i = 1; i<=k;i++) {
             rem = (rem*10+1)%k;
             if(rem==0) {
                return i;
             }
          }
          return -1;
    }
};