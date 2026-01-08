class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;  

        for (int i = 0; i < s.size(); i++) {
            string temp = "";  

            for (int j = i; j < s.size(); j++) {
            
                if (temp.find(s[j]) != string::npos) {
                    break;
                }
                temp.push_back(s[j]);
            }

            ans = max(ans, (int)temp.size());
        }

        return ans;
    }
};
