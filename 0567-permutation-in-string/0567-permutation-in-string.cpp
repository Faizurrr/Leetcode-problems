class Solution { // fav problem of sliding windows....
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s1.length() > s2.length()) return false;
        
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        
        // Count frequency of s1
        for(char c : s1) {
            freq1[c - 'a']++;
        }
        
        int windowSize = s1.length(); 
        
        // Sliding window on s2
        for(int i = 0; i < s2.length(); i++) {
            
            freq2[s2[i] - 'a']++;
            
            // Remove element outside window
            if(i >= windowSize) {
                freq2[s2[i - windowSize] - 'a']--;
            }
            
            // Compare frequencies
            if(freq1 == freq2) {
                return true;
            }
        }
        
        return false;
    }
};
