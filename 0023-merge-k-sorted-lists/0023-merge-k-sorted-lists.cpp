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
    ListNode* mergeKLists(vector<ListNode*>& lists) {


        vector<int>arr;
        int n=lists.size();

        for(int i=0;i<n;i++){
            // lists[i] is storing head of list not complete list
            ListNode* temp=lists[i];

            if(temp==NULL){
                continue;
            }

            while(temp!=NULL){
                arr.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(arr.begin(),arr.end());

        ListNode* dummy=new ListNode(0);
        ListNode* newHead=dummy;
        for(int v:arr){

            ListNode* temp=new ListNode(v);
            dummy->next=temp;

            dummy=temp;
        }
        return newHead->next;
        
    }
};