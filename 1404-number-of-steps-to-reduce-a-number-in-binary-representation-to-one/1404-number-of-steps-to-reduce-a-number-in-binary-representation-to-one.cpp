// class Solution {
// public:
//     int numSteps(string s) {
// this code is correct if the constraints is below 2^64..
//         int size = s.size();
//         long long val = 0;
//         long long m = 1;
//         long long count = 0;

//         for (int i = size - 1; i >= 0; i--) {
//             val = val + ((s[i] - '0') * m);
//             m = m * 2; // this value will overflow because the constraint is :1 <= s.length <= 500 and we  know long long data type highest limit is: 263−1
//         }

//         while (val != 1) {
//             if (val % 2 != 0) {
//                 val = val + 1;
//             } else {
//                 val /= 2;
//             }
//             count++;
//         }
//         return count;
//     }
// };
class Solution {
public:
// my apporoch is : Without converting binary respersention check if it odd add 1 in binary form otherwise divide this and count each step .. repeat this process untill binary form not reached 1 in its binary repersentation 
           int numSteps(string s) {
        int steps = 0;

        while (s != "1") {
            // EVEN
            if (s.back() == '0') {
                s.pop_back();  // divide by 2
            }
            // ODD
            else { // add 1;
                int i = s.size() - 1;

                // Handle carry for +1
                while (i >= 0 && s[i] == '1') {
                    s[i] = '0';
                    i--;
                }

                if (i >= 0) {
                    s[i] = '1';
                } else {
                    s = '1' + s;  // all bits were 1
                }
            }
            steps++;
        }
        return steps; 
    }
};