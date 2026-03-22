class Solution {
public:
    // check all odd
    bool Isallodd(vector<int> &nums1) { 
        for(int i = 0; i < nums1.size(); i++) {
            if(nums1[i] % 2 == 0) {
                return false;
            }
        }
        return true;
    }

    // check all even
    bool Isalleven(vector<int> &nums1) { 
        for(int i = 0; i < nums1.size(); i++) {
            if(nums1[i] % 2 != 0) {
                return false;
            }
        }
        return true;
    }

    bool uniformArray(vector<int>& nums1) {

        if(Isallodd(nums1)) return true;
        if(Isalleven(nums1)) return true;

        // if both even and odd present
        sort(nums1.begin() , nums1.end());
         if(nums1[0]%2==0) {
             return false;
         }
         return true;
    }
};