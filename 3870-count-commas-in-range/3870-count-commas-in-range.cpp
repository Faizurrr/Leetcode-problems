class Solution {
public:
    int countCommas(int n) {
      if(n<1000)   {
         return 0;
      }
          int ans = 0;
           
            for(int i = 1000 ; i<=n; i++) {
               if(i<=1e5)   {
                   ans+=1;
               
               }
            
             
        }

        return ans;
    }
};