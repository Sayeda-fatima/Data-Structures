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
    int pathSum(TreeNode* root, long int data){
        if(root==NULL)
            return 0;
        data=(data<<1) +root->val;
        if(root->left==NULL && root->right==NULL)
            return data;
        return pathSum(root->left, data)+pathSum(root->right, data);
    }
    int sumRootToLeaf(TreeNode* root) {
        return pathSum(root, 0);
    }
};
