class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {// time complexity of this problem : O(nlogn)
       vector<int>ans;
        for(int i =0; i <nums.size(); i++){
            int number = nums[i];
            string st = to_string(number);
            // while(number>0){
            //       int digit = number%10;
            //         number/=10;
            //        ans.push_back(digit);
            // }
        // } 
            for(int i =0 ; i <st.size(); i++){
                 ans.push_back(st[i]-'0');
            }
       
        }
        return ans;
    }
};