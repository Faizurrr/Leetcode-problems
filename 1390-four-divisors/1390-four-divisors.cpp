class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i]; 
            int count = 2;           
            int sum = 1 + n;

            for (int j = 2; j * j <= n; j++) {
                if (n % j == 0) {
                    int d = n / j;

                    if (j == d) {    
                        count += 1;
                        sum += j;
                    } else {
                        count += 2;
                        sum += j + d;
                    }
                }
            }

            if (count == 4) {
                ans += sum;
            }
        }

        return ans;
    }
};
