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

    int func(TreeNode* root,int n){

        if(root==NULL){
            return n;
        }
        int a=func(root->left,n+1);
        int b=func(root->right,n+1);

        return max(a,b);
    }

    int maxDepth(TreeNode* root) {
        
        return func(root,0);

        
    }
};