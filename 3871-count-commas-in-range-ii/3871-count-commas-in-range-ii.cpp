class Solution {
public:
    long long countCommas(long long n) {

        if(n < 1000) return 0;

        long long ans = 0;

        if(n >= 1000)
            ans += (min(n, (long long)1e6 - 1) - 1000 + 1) * 1;

        if(n >= 1e6)
            ans += (min(n, (long long)1e9 - 1) - 1e6 + 1) * 2;

        if(n >= 1e9)
            ans += (min(n, (long long)1e12 - 1) - 1e9 + 1) * 3;

        if(n >= 1e12)
            ans += (min(n, (long long)1e15 - 1) - 1e12 + 1) * 4;

        if(n >= 1e15)
            ans += (n - 1e15 + 1) * 5;

        return ans;
    }
};