class Solution {
public:
     string largestEven(string s) {
    //     int val = stoi(s);
    //     if(val%2==0) {  // if number is already even.
    //         return s;
    // } else{
    //     while(val%2!=0 || s.size()==0) { 
    //            s.pop_back();
    //     } 
    // }
    //      return s;
        while (!s.empty()) {
            int lastDigit = s.back() - '0';
            if (lastDigit % 2 == 0) {
                return s;
            }
            s.pop_back();
        }
        return "";
    }
};
