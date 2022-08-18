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
    
    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>>level;
        int i,size;
        if(root==NULL)
            return level;
        queue<TreeNode*>q;
        q.push(root);
        TreeNode *node;
        while(!q.empty()){
            vector<int>temp;
            size=q.size();
            for(i=0; i<size; i++){
                node=q.front();
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                q.pop();
                temp.push_back(node->val);
            }
            level.push_back(temp);
        }
        return level;
    }
};
