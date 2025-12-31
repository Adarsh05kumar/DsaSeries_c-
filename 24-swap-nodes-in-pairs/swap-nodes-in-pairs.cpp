class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;

        unordered_map<int, int> store;
        ListNode* temp = head;
        int n = 0;

        while (temp) {
            store[n++] = temp->val;
            temp = temp->next;
        }

        temp = head;

        for (int i = 0; i + 1 < n; i += 2) {
            temp->val = store[i + 1];
            temp = temp->next;

            temp->val = store[i];
            temp = temp->next;
        }

        return head;
    }
};