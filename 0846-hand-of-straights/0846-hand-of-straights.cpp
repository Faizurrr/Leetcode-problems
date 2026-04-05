class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();

        
        if (n % groupSize != 0) return false;

        
        unordered_map<int, int> freq;
        for (int val : hand) {
            freq[val]++;
        }

        
        sort(hand.begin(), hand.end());

        
        for (int i = 0; i < n; i++) {
            int start = hand[i];

            
            if (freq[start] == 0) continue;

        
            for (int j = 0; j < groupSize; j++) {
                int card = start + j;

                // If missing, return false
                if (freq[card] == 0) {
                    return false;
                }

                // Use this card
                freq[card]--;
            }
        }

        return true;
    }
};