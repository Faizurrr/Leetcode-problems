class Solution {
public:
    int totalMoney(int n) {
        int weeks = n / 7;
        int remaining_days = n % 7;

        
        int total = 28 * weeks + (weeks * (weeks - 1) / 2) * 7;

        
        for (int i = 1; i <= remaining_days; i++) {
            total += weeks + i;
        }

        return total;
    }
};
