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
    int distance(TreeNode* root){
        if(root==NULL)
            return 0;
        return 1+max(distance(root->left), distance(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter;
        if(root==NULL)
            return 0;
        int l_diameter=diameterOfBinaryTree(root->left);
        int r_diameter=diameterOfBinaryTree(root->right);
        int l_distance=distance(root->left);
        int r_distance=distance(root->right);
        diameter=max(l_distance+r_distance, max(l_diameter, r_diameter));
        return diameter;
    }
};
