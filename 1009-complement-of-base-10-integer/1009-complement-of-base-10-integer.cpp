#include <bitset>
#include <cmath>

class Solution {
public:
    int bitwiseComplement(int n) {

        if(n == 0) return 1;

        int minSize = log2(n) + 1;

        string s = bitset<32>(n).to_string();

        s = s.substr(32 - minSize);

        int ans = 0;
        int m = 1;

        for(int i = s.size()-1 ; i>=0; i--) {

            if(s[i]=='0'){
                ans += m;
            }

            m *= 2;
        }

        return ans;
    }
};