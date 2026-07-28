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
    int cal_gcd(int a, int b) {
        while (a > 0 && b > 0) {
            if (a > b) {
                a = a % b;
            }
            else{
                b = b % a;
            }
        }
        if (a == 0) {
            return b;
        }
        if (b == 0) {
            return a;
        }
        return -1;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* curr = head;
        ListNode* nextNode = head->next;
        while (nextNode != NULL) {

            int data = cal_gcd(curr->val, nextNode->val);
            ListNode* newNode = new ListNode(data);
            newNode->next=nextNode;
            curr->next=newNode;

            curr=nextNode;
            nextNode=curr->next;
        }
        return head;
    }
};