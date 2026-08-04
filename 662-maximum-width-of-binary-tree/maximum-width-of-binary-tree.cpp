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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode* , unsigned long long>> q;
        q.push({root , 0});
        int maxwidth=0;
        while(!q.empty()){
            int n=q.size();
            unsigned long long start=q.front().second;
            unsigned long long end=q.back().second;
            maxwidth=max(maxwidth,(int)(end-start+1));
            for(int i=0;i<n;i++){
                TreeNode* node=q.front().first;
                unsigned long long idx=q.front().second;
                q.pop();
                if(node->left){
                    q.push({node->left,2*idx+1});
                }
                if(node->right){
                    q.push({node->right,2*idx+2});
                }
            }
        }
        return maxwidth;
        
    }
};