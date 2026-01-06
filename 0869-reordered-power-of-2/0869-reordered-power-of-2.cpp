class Solution {
public:
    bool reorderedPowerOf2(int n) {
        unordered_set<string> all;

        // Store all sorted string representations of powers of 2
        for (int i = 0; i < 31; i++) {  
            int power = 1 << i; // 2^i
            string s = to_string(power);
            sort(s.begin(), s.end());
            all.insert(s);
        }

    
        string val = to_string(n);
        sort(val.begin(), val.end());

        
        return all.count(val) > 0;
    }
};
