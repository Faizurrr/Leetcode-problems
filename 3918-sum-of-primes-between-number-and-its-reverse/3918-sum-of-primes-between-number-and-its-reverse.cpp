class Solution {
public:
     int Rev(int n ) {
          int reversed = 0;
           while(n>0){
         int digit = n%10;
          reversed = reversed*10 + digit ;
           n/=10;
           }
            return reversed;
     }
      bool isPrime(int i ){
          if(i<=1){
             return false;
          } else if(i==2){
             return true;
          } else if(i%2==0){
             return false;
          }
         for(int j = 3 ; j*j <= i ; j++){
            if(i%j==0){
                 return false;
            }
         }
          return true;
      }
    int sumOfPrimesInRange(int n) {
         int right = Rev(n);
           long long sum = 0;
            if(n>right){
                 swap(n , right);
            }
         for(int i =n ; i <=right ; i++){
               if(isPrime(i)){
                 sum+=i;
               }  
         }
          return sum;
    }
};