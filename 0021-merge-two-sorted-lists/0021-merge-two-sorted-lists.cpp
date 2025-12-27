class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      // This apporoch is correct but i will take much space complexity... 
        vector<int> array1, array2;

    
        ListNode* temp = list1;
        while (temp != nullptr) {
            array1.push_back(temp->val);
            temp = temp->next;
        }

        
        temp = list2;
        while (temp != nullptr) {
            array2.push_back(temp->val);
            temp = temp->next;
        }

        vector<int> ans;
        int i = 0, j = 0;

        while (i < array1.size() && j < array2.size()) {
            if (array1[i] <= array2[j]) {
                ans.push_back(array1[i]);
                i++;
            } else {
                ans.push_back(array2[j]);
                j++;
            }
        }

        
        while (i < array1.size()) {
            ans.push_back(array1[i]);
            i++;
        }
        while (j < array2.size()) {
            ans.push_back(array2[j]);
            j++;
        }

    
        if (ans.size() == 0) return nullptr;

        ListNode* head = new ListNode(ans[0]);
        ListNode* curr = head;

        for (int k = 1; k < ans.size(); k++) {
            curr->next = new ListNode(ans[k]);
            curr = curr->next;
        }

        // Step 5: return head
        return head;
    }
};
