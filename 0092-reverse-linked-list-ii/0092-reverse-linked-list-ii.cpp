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
    // Reverse a linked list and return the new head
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {

        // No reversal needed
        if (head == NULL || head->next == NULL || left == right) {
            return head;
        }

        int l = 1, r = 1;

        // Find the left node and its previous node
        ListNode* lcurr = head;
        ListNode* lprev = NULL;

        while (lcurr != NULL && l < left) {
            lprev = lcurr;
            lcurr = lcurr->next;
            l++;
        }

        // Find the right node
        ListNode* rcurr = head;

        while (rcurr != NULL && r < right) {
            rcurr = rcurr->next;
            r++;
        }

        // Starting node of the sublist to reverse
        ListNode* newLhead = lcurr;

        // Disconnect the left part from the middle part
        if (lprev != NULL) {
            lprev->next = NULL;
        }

        // Store the node after 'right'
        ListNode* newRhead = NULL;

        if (rcurr != NULL) {
            newRhead = rcurr->next;

            // Disconnect the middle part from the right part
            rcurr->next = NULL;
        }

        // Reverse the isolated middle part
        ListNode* temp = reverse(newLhead);

        // Connect the left part with the reversed list
        if (lprev == NULL) {
            // left == 1, so the new head changes
            head = temp;
        } else {
            lprev->next = temp;
        }

        // newLhead becomes the tail after reversal
        // Connect it with the remaining right part
        newLhead->next = newRhead;

        return head;
    }
};