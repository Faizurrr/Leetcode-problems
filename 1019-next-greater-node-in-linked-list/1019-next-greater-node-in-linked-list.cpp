class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> cont;
        vector<int> ans;

        // Convert linked list to array
        ListNode* temp = head;
        while (temp != nullptr) {
            cont.push_back(temp->val);
            temp = temp->next;
        }

        // Brute force
        for (int i = 0; i < cont.size(); i++) {
            bool found = false;

            for (int j = i + 1; j < cont.size(); j++) {
                if (cont[j] > cont[i]) {
                    ans.push_back(cont[j]);
                    found = true;
                    break;
                }
            }

            if (!found) {
                ans.push_back(0);
            }
        }

        return ans;
    }
};
