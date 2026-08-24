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
    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root,ans);
        int i=0;
        int j=ans.size()-1;
        while(i<j){
            if(ans[i]+ans[j]==k){
                return true;
            }
            else if(ans[i]+ans[j]<k){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
        
    }
    void inorder(TreeNode* root,vector<int>& ans){
        stack<TreeNode*> st;
        TreeNode* curr=root;
        while(curr!=NULL || !st.empty()){
            while(curr!=NULL){
                st.push(curr);
                curr=curr->left;
            }
            curr=st.top();
            st.pop();
            ans.push_back(curr->val);
            curr=curr->right;
        }
    }

    // void inorder(TreeNode* root,vector<int> ans;){
    //     if(root==NULL){
    //         return;
    //     }
    //     inorder(root->left);
    //     ans.push_back(root->val);
    //     inorder(root->right);
    // }
    // vector<int> inorderans(TreeNode* root){
    //     vector<int> ans;
    //     inorder(root,ans);
    //     returna ans;
    // }
};