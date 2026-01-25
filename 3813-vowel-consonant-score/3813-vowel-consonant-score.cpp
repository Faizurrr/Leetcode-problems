class Solution {
public:
    int vowelConsonantScore(string s) {
        int v = 0;
        int c = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {
                v++;
            }
            else if (isalpha(s[i]) &&
                     s[i] != 'a' && s[i] != 'e' && s[i] != 'i' &&
                     s[i] != 'o' && s[i] != 'u') {
                c++;
            }
        }

        if (c > 0)
            return v / c;   

        return 0;
    }
};
