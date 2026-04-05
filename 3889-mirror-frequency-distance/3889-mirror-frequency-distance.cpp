class Solution {
public:
    int mirrorFrequency(string s) {
        long long ans = 0; // Use long long for the sum to be safe
        unordered_map<char, int> freq;

        // Step 1: Count frequencies
        for (char ch : s) {
            freq[ch]++;
        }

        unordered_set<char> visited;

        // Step 2: Process each unique char found in the string
        for (auto const& [ch, count] : freq) {
            if (visited.count(ch)) continue;

            char m;
            // Determine the mirror character mathematically
            if (ch >= 'a' && ch <= 'z') {
                m = 'a' + ('z' - ch);
            } else if (ch >= '0' && ch <= '9') {
                m = '0' + ('9' - ch);
            } else {
                continue; // Should not happen based on constraints
            }

            int f1 = count;
            int f2 = freq.count(m) ? freq[m] : 0;

            ans += abs(f1 - f2);

            // Mark both as visited so the pair is only counted once
            visited.insert(ch);
            visited.insert(m);
        }

        return (int)ans;
    }
};