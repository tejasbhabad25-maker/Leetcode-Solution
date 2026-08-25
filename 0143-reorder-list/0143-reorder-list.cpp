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
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void reorderList(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* headA = head;
        ListNode* headB = slow->next;

        slow->next = NULL;

        headB = reverse(headB);

        ListNode* tempA = headA;
        ListNode* tempB = headB;

        while (tempA != NULL && tempB != NULL) {

            ListNode* nextA = tempA->next;
            ListNode* nextB = tempB->next;

            tempA->next = tempB;
            tempB->next = nextA;

            tempA = nextA;
            tempB = nextB;
        }
    }
};