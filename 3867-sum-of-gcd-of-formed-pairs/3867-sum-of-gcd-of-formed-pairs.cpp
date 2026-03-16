class Solution { // just need to samulate...
public:
    long long gcdSum(vector<int>& nums) {
        // step1 : form prefixGcd array
        // step2 :  Sort prefixGcd in non-decreasing order.
        // step3 :  Form pairs by taking the smallest unpaired element and the largest unpaired element.
        // step4 : Repeat this process until no more pairs can be formed.
        // step5 : For each formed pair, compute the gcd of the two elements.
        // step6: If n is odd, the middle element in the prefixGcd array remains unpaired and should be ignored.
         // finalStep :   Return an integer denoting the sum of the GCD values of all formed pairs
        vector<int>prefixGcd;
        long long  ans = 0;
        int maxElement = INT_MIN;
        for(int i = 0; i<nums.size();i++) {
            maxElement = max(maxElement , nums[i]);
             int val = gcd(nums[i] , maxElement);
              prefixGcd.push_back(val);
        }
           sort(prefixGcd.begin() , prefixGcd.end());
           int str = 0; 
            int end  = nums.size()-1;
             while(end>str) {
                 ans+=gcd(prefixGcd[str] , prefixGcd[end]);
                 str++;
                  end--;
             }
             return ans;
    }
};