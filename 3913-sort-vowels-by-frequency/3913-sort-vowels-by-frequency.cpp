// class Solution {
// public:
//   bool isVowel (string s){
//      if(s[i]=='a'|| s[i]=='e' 
//      || s[i]=='i'|| s[i]=='o'||
//       s[i]=='u'){
//         return true; 
//      }
//       return false;
//   }
   
//     string sortVowels(string s) {
//          unordered_map<char , int>freq;
//         for(int i= 0 i<s.size(); i++){ // freq of vowels
//              if(isVowel[s[i]]){
//                 freq[s[i]]++;
                 
//              }    
//         } 
//           vector<pair<char , int>>cont;
//          for(int  i = 0 ; i<s.size();i++){
//              if(isVowel[s[i]]){
//                  cont.push_ back({s[i] , freq[s[i]]});
//              }
//          }
//           sort(cont.begin(), cont.end());
//                                             // sort based on freq in decersing order..
//            for(int   i = 0 ; i<s.size();i++){
//              int c = 0;
//               if(isVowel(s[i]) && s[i]!=cont[c]){
//                     s[i]= cont[c];
//                     c++;
//               }
//            }
//            return s;
          
//     }
// };
class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    string sortVowels(string s) {
        string glanvoture = s;   // required by problem

        unordered_map<char, int> freq;
        unordered_map<char, int> firstPos;

        // Step 1: count frequency + first occurrence
        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                freq[s[i]]++;
                if (firstPos.find(s[i]) == firstPos.end()) {
                    firstPos[s[i]] = i;
                }
            }
        }

        // Step 2: store vowels in container (your approach)
        vector<pair<char, int>> cont;

        for (auto &it : freq) {
            cont.push_back({it.first, it.second});
        }

        // Step 3: sort based on freq desc, tie -> first occurrence asc
        sort(cont.begin(), cont.end(), [&](pair<char, int>& a, pair<char, int>& b) {
            if (a.second != b.second) return a.second > b.second;
            return firstPos[a.first] < firstPos[b.first];
        });

        // Step 4: replace vowels in string using sorted container
        int c = 0;   // pointer on cont
        int used = 0; // how many times current vowel used

        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                s[i] = cont[c].first;
                used++;

                // move to next vowel when current freq exhausted
                if (used == cont[c].second) {
                    c++;
                    used = 0;
                }
            }
        }

        return s;
    }
};