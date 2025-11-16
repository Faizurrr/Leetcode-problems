class Solution {
public:
// brute force apporoch (return all substring  and check all substring value if it is valid for given problem then count it )
    // bool isValid(string temp) {
    //     for (int i = 0; i < temp.size(); i++) {
    //         if (temp[i] != '1') {   
    //             return false;
    //         }
    //     }
    //     return true;
    // }

    // int numSub(string s) {
    //     int count = 0;
    //     string temp = "";

    //     for (int str = 0; str < s.size(); str++) {
    //         for (int end = str; end < s.size(); end++) {  
    //             for (int i = str; i <= end; i++) {
    //                 temp += s[i];   
    //             }
    //             if (isValid(temp)) {
    //                 count++;
    //             }
    //             temp = "";     
    //         }
    //     }
    //     return count;
     // optimize apporoch 
   
    int numSub(string s) {
        const long long MOD = 1e9 + 7;
        long long count = 0;   // counts continuous ones
        long long ans = 0;

        for (char c : s) {
            if (c == '1') {
                count++;  // count continuous ones
            } else {
                ans = (ans + (count * (count + 1) / 2) % MOD) % MOD;
                count = 0;
            }
        }

        // for last segment
        ans = (ans + (count * (count + 1) / 2) % MOD) % MOD;

        return ans;
    }
};

  
