class Solution {
public:

    // function to count vowels
    int Noofvowel(string st) {
        int count = 0;
        for (int i = 0; i < st.size(); i++) {
            if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' ||
                st[i] == 'o' || st[i] == 'u' )
               {
                count++;
            }
        }
        return count;
    }

    // function to reverse a string
    void ReverseString(string &st) {
        int start = 0;
        int end = st.size() - 1;
        while (start < end) {
            swap(st[start], st[end]);
            start++;
            end--;
        }
    }

    string reverseWords(string s) {

        // split string into words
        vector<string> words;
        string temp = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                words.push_back(temp);
                temp = "";
            } else {
                temp += s[i];
            }
        }
        words.push_back(temp);

        // count vowel in first word
        int target = Noofvowel(words[0]);

        // check every word
        for (int i = 1; i < words.size(); i++) {
            if (Noofvowel(words[i]) == target) {
                ReverseString(words[i]);
            }
        }

        // join words back
        string result = "";
        for (int i = 0; i < words.size(); i++) {
            result += words[i];
            if (i != words.size() - 1)
                result += " ";
        }

        return result;
    }
};
