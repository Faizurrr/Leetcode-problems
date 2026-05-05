/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution { // By cheating method .. covert the entire linked question into array's question
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // Edge cases
        if(head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }

        // Step 1: Store linked list values into array
        vector<int> arr;
        ListNode* temp = head;

        while(temp != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int n = arr.size();
        k = k % n;   // important

        // If no rotation needed
        if(k == 0) return head;

        // Step 2: Create rotated array
        vector<int> rotated(n);

        for(int i = 0; i < n; i++) {
            rotated[(i + k) % n] = arr[i];
        }

        // Step 3: Create new linked list from rotated array
        ListNode* newHead = new ListNode(rotated[0]);
        ListNode* curr = newHead;

        for(int i = 1; i < n; i++) {
            curr->next = new ListNode(rotated[i]);
            curr = curr->next;
        }

        return newHead;
    }
};