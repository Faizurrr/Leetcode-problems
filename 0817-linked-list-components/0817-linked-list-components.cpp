class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {

        vector<int> arr;
        ListNode* temp = head;

        while (temp != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        sort(nums.begin(), nums.end());

        int count = 0;

        for (int i = 0; i < arr.size(); i++) {

        
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
