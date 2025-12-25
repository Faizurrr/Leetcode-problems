// class Solution {
// public:
 
//    void  updated_array(vector<int>& happiness) {
//          for(int  i =0; i<happiness.size();i++) {
//               happiness[i] = happiness[i] -1;
//          }
//    }
//     long long maximumHappinessSum(vector<int>& happiness, int k) {
//       // brute force apporoch..
//        // step 1 : always chose maximum value(greedy apporoch) 
//        // step 2 : reduce each and every value form array by 1 after slecting the highest value 
//         // step 3 : reduce value of k by 1 till its become zero
//          int ans = 0;
//          while(k>0) {
//               int val =  max_Element(happiness.begin() , happiness.end());
//                    happiness.pop_back(that that which store the maximu val)
//                updated_array(happiness);
//                 if(val>0) {
//                      ans+=val;
//                 }
            
//               k-=1;
//          }
//       return ans;
//     }
// };
class Solution {
public:
    // optimize apporoch...
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(), greater<int>());

        long long sum = 0;

        for (int i = 0; i < k; i++) {
            int curr = happiness[i] - i;
            if (curr > 0)
                sum += curr;
            else
                break;  
        }

        return sum;
    }
};
