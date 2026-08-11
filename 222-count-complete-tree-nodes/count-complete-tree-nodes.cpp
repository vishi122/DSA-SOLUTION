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
    int countNodes(TreeNode* root) {
        // queue<TreeNode*> q;
        // if(root==NULL){
        //     return 0;
        // }
        // int count =0;
        // q.push(root);
        // while(!q.empty()){
        //     TreeNode* node=q.front();
        //     q.pop();
        //     count++;
        //     if(node->left){
        //         q.push(node->left);
        //     }
        //     if(node->right){
        //         q.push(node->right);
        //     }
        // }
        // return count;
        if(root==NULL){
            return 0;
        }
        int lh=leftheight(root);
        int rh=rightheight(root);
        if(lh==rh){
            return (1 << lh)-1;
        }
        return 1+ countNodes(root->left) + countNodes(root->right);
    }
    int leftheight(TreeNode* root){
        int h=0;
        while(root){
            h++;
            root=root->left;
        }
        return h;        
    }
    int rightheight(TreeNode* root){
        int h=0;
        while(root){
            h++;
            root=root->right;
        }
        return h;
    } 
};