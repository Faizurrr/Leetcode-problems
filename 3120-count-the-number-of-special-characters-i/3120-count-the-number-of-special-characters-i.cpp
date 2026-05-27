class Solution {
public:
    int numberOfSpecialChars(string word) {
        int ans = 0;

        unordered_set<char> st(word.begin(), word.end());

        for(char ch = 'a'; ch <= 'z'; ch++) {

            // check lowercase and uppercase both exist
            if(st.find(ch) != st.end() &&
               st.find(ch - 32) != st.end()) {

                ans++;
            }
        }

        return ans;
    }
};