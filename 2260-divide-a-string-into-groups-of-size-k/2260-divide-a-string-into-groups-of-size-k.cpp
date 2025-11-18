class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int size = s.size();
        vector<string> ans;

        for (int i = 0; i < size; i += k) {
            string temp = "";

            // take k characters or until string ends
            for (int j = i; j < i + k && j < size; j++) {
                temp += s[j];
            }

            // if length is less than k → add fill
            while (temp.size() < k) {
                temp += fill;
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
