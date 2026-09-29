/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    bool isSameTree(TreeNode* p, TreeNode* q) {

        // brute appraoch -> convert given two trees to array in inorder/preorder/postorder( vector<optional<int>>arr) as we want
        // just only one conversion for both then compare both arr 
        // TC - O(n) , SC - O(n)

        //optional is a C++ feature that means:
        // This variable may contain a value, or it may contain nothing.

        // use this while storing the pointers so we can store null


        // A slight optimal can be instead of storing do that traversal of both simultaneously
        // and check if they are equal

        if(p==NULL || q==NULL){
            return p==q;
            // will return T/F
        }

        return (p->val==q->val) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        
    }
};