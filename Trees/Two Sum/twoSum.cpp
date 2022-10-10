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
    vector<int> v;
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    bool target(int k){
        int n=v.size();
        int i=0, j=n-1;
        while(i<j){
            int sum=v[i]+v[j];
            if(sum==k)
                return true;
            if(sum<k)
                i++;
            else
                j--;
        }
        return false;
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        sort(v.begin(), v.end());
        return target(k);
    } 

};
