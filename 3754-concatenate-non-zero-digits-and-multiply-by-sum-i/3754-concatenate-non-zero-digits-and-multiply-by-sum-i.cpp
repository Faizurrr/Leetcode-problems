class Solution {
public:
    long long sumAndMultiply(int n) {
         string x = "0";
          long long sum = 0; 
        string s = to_string(n);
        for(int i = 0 ; i<s.size();i++) {
            if(s[i]-'0'!=0) {
               x+=s[i];
                sum+=s[i]-'0';
            }
        }
          
     
            long long val = stoll(x);
            return sum*val;
    }
};