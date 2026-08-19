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
    vector<int> ans;
    int kthSmallest(TreeNode* root, int k) {
        inorderTraversal(root);
        return ans[k-1];
    }
    void inorderTraversal(TreeNode* root) {
        // if(!root) return {};
        // TreeNode* temp=root;
        // vector<int> out;
        // stack<TreeNode*> s;
        // while(temp || !s.empty()){
        //     if(temp){
        //         s.push(temp);
        //         temp=temp->left;
        //     }
        //     else{
        //         temp=s.top();
        //         s.pop();
        //         out.push_back(temp->val);
        //         temp=temp->right;
        //     }
        // }
        // return out[k-1];
        if(root==NULL){
            return;
        }
        inorderTraversal(root->left);
        ans.push_back(root->val);
        inorderTraversal(root->right);     
    }
};