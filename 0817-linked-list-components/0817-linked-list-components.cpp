class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {

        vector<int> arr; // this array store the value of linked list 
        ListNode* temp = head;

        while (temp != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        sort(nums.begin(), nums.end());

        int count = 0;

        for (int i = 0; i < arr.size(); i++) {
          // basic apporch find the value of nums[i] in array and check next indx  if they are not find  at consecutive  indx then count.. 
        
            if (binary_search(nums.begin(), nums.end(), arr[i])) {

            
                if (i == arr.size() - 1 ||
                    !binary_search(nums.begin(), nums.end(), arr[i + 1])) {
                    count++;
                }
            }
        }

        return count;
    }
};
