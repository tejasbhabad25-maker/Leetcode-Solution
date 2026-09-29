// *
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };

class Solution {
public:


    int func(TreeNode* root,int& ans){
        if(root==NULL) return 0;

        int x=func(root->left,ans);
        int y=func(root->right,ans);

        ans=max(x+y,ans);

        return max(x,y)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL){
            return 0;
        }

        int ans=0;

        func(root,ans);

        return ans;
    }
};