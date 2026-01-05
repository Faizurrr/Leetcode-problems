class Solution {
public:
    string reversePrefix(string s, int k) {
       int end   = k-1;
        int str  = 0;
         while(end>str)  {
             swap(s[end] , s[str]);
              end--;
               str++;
         }
          return s;
    }
};