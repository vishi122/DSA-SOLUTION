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
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL){
            return 0;
        }
        return inorderTraversal(root, k);
    }
    int inorderTraversal(TreeNode* root, int k) {
        if(!root) return {};
        TreeNode* temp=root;
        vector<int> out;
        stack<TreeNode*> s;
        while(temp || !s.empty()){
            if(temp){
                s.push(temp);
                temp=temp->left;
            }
            else{
                temp=s.top();
                s.pop();
                out.push_back(temp->val);
                temp=temp->right;
            }
        }
        return out[k-1];
    }
};