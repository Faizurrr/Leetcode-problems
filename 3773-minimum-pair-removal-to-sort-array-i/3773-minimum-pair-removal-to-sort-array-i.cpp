
class Solution {
public:
    bool isAlreadySorted(vector<int>& nums) { // function to check array is already sorted or not 
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1])
                return false;
        }
        return true;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int operations = 0;

      while (!isAlreadySorted(nums) && nums.size() > 1) { // do the operations on array until its not sort.. 
            int minSum = INT_MAX;
            int minIndex = 0;

       
            for (int i = 0; i < nums.size() - 1; i++) {
                int sum = nums[i] + nums[i + 1];
                if (sum < minSum) {
                    minSum = sum;
                    minIndex = i;
                }
            }

            // Remove that pair and replace with minSum
            nums.erase(nums.begin() + minIndex, nums.begin() + minIndex + 2);
            nums.insert(nums.begin() + minIndex, minSum);

            operations++;
        }

        return operations;
    }
};
