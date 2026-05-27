 // This solution is the  correct for all special character
// class Solution {
// public:
//     int passwordStrength(string password) {

//          int score = 0; 
//         unordered_set<char> st (password.begin() , password.end());
//          for(auto val : st){
//              if(val>=97 && val<=122){ //ASCII Values Range for lowercase English latter...
//                 score+=1;
                  
//              }else if(val>=65 && val<=90){ //ASCII Values Range  for Uppercase English latter...
//                 score+=2;
//              } else if(val >=33 && val<=64){ //ASCII Values Range  for special character...
//                  score+=5;
//              } else {
//                  score+=3;
//              }
//          }
//          return score;
//     }
// };
        // special characters like :  "!@#$" only 
class Solution {
public:
    int passwordStrength(string password) {

        int score = 0;

        unordered_set<char> st(password.begin(), password.end());

        for(auto val : st) {

            // lowercase
            if(val >= 97 && val <= 122) {
                score += 1;
            }

            // uppercase
            else if(val >= 65 && val <= 90) {
                score += 2;
            }

            // digits
            else if(val >= 48 && val <= 57) {
                score += 3;
            }

            // special characters
            else if(val == '!' || val == '@' || 
                    val == '#' || val == '$') {
                score += 5;
            }
        }

        return score;
    }
};