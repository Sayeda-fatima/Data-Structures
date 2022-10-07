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
    vector<int> largestValues(TreeNode* root) {
        vector<int>result;
        if(root==NULL)
            return result;
        queue<TreeNode*>q;
        q.push(root);
        int maxVal=INT_MIN;
        
        while(!q.empty()){
            int len=q.size();
            maxVal=INT_MIN;
            for(int idx=0; idx<len; idx++){
                TreeNode* front=q.front();
                q.pop();
                if(front->val>maxVal)
                    maxVal=front->val;
                if(front->left)
                    q.push(front->left);
                if(front->right)
                    q.push(front->right);
                
            }
            result.push_back(maxVal);
        }
        return result;
    }
};
