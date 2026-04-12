class Solution {
public:

    // Function to check prime
    bool isPrime(int n) {
        if(n <= 1) return false;
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) return false;
        }
        return true;
    }

    int minOperations(vector<int>& nums) {
        int op = 0;

        for(int i = 0; i < nums.size(); i++) {

        
            if(i % 2 == 0) {
                while(!isPrime(nums[i])) {
                    nums[i]++;
                    op++;
                }
            }

            
            else {
                while(isPrime(nums[i])) {
                    nums[i]++;
                    op++;
                }
            }
        }

        return op;
    }
};