class Solution {
public:
  bool isdivisble(vector<int>nums) {
    for(int i =0 ; i<nums.size();i++) {
        if(nums[i]%3!=0) {
            return false;
        }
    }
     return true;
  }
  // remender will in range of{ 0 to 2}
    int minimumOperations(vector<int>& nums) {
         int count =0;
         while(!isdivisble(nums)){
        for(int i =0 ; i<nums.size();i++) {
            if(nums[i]%3==1 && nums[i]!=1){ // 
             nums[i]-=1;
             count++;
            } else if(nums[i]%3==2 && nums[i]!=2) {
                nums[i] = nums[i]+1;
                count+=1;
            } else if(nums[i]==1) {
                nums[i]-=1;
                count++;
            } else if(nums[i]==2) {
                nums[i]+=1;
                count++;
            }
        }
        }
         return count;
    }
};