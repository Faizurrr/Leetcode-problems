// Brute force apporoch ...
        // apporoch is easy but samulation is though:
        // the apporoch is generate all posible binary  string of size n and store in map 
        // return those string which is not present in array.
         

class Solution { // intresting question ...
public: 
    string findDifferentBinaryString(vector<string>& nums) {
      // optimize apporoch    
         int n = nums.size();
        string ans = "";

        for(int i = 0; i < n; i++) {
            if(nums[i][i] == '0')
                ans += '1';
            else
                ans += '0';
        }

        return ans;
    }
};