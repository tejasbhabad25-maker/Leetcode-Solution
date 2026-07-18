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
class Solution {
public:
    bool isPalindrome(ListNode* head) {

        if (head == NULL) {
            return true;
        }

        // copying value of original to newHead

        // Create the first node
        ListNode* newHead = new ListNode(head->val);
        ListNode* tail = newHead;

        // Traverse the original list
        ListNode* temp = head->next;

        while (temp != NULL) {

            ListNode* newNode = new ListNode(temp->val);

            tail->next = newNode;
            tail = newNode;

            temp = temp->next;
        }

        // reverse Linked list
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // checking
        while (prev != NULL && newHead != NULL) {
            if (prev->val != newHead->val) {
                return false;
            } else {
                prev = prev->next;
                newHead = newHead->next;
            }
        }
        return true;
    }
};