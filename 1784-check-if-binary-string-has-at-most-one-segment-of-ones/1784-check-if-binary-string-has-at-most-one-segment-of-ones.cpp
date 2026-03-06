class Solution {
public:
    bool checkOnesSegment(string s) {
        bool zeroSeen = false;
        for(int i = 0 ; i<s.size(); i++) {
              if(s[i]=='0') {
                zeroSeen = true;
              } else if(s[i]=='1' && zeroSeen) {
                 return false;
              }
        }
        return true;
    }
};