// class Solution {
// public:
//     int countOdds(int low, int high) { // Brute force Apporoch.....
//          int ans = 0;
//        for(int i = low ; i<=high ; i++){
//             if(i%2!=0){
//                  ans++;
//             }
//        }
//        return ans;
//     }
// };
  class Solution {
    public:
 int countOdds(int low, int high) { 
       int totalNum = (high - low)+1 ;
        int odd = totalNum/2; 
         if(low%2!=0 && totalNum%2!=0){ // START WITH ODD
             return odd+1;
         }
        return odd;
 }
  };