/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode* , TreeNode*> trackparent;
        markedparent(root , trackparent , target);
        unordered_map<TreeNode* , bool> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited[target]=true;
        int currdis=0;
        while(!q.empty()){
            int n=q.size();
            if(currdis==k){
                break;
            }
            currdis++;
            for(int i=0;i<n;i++){
                TreeNode* current=q.front();
                q.pop();
                if(current->left && !visited[current->left]){
                    q.push(current->left);
                    visited[current->left]=true;
                }
                if(current->right && !visited[current->right]){
                    q.push(current->right);
                    visited[current->right]=true;
                }
                if(trackparent[current] && !visited[trackparent[current]]){
                    q.push(trackparent[current]);
                    visited[trackparent[current]]=true;
                }
            }
        }
        vector<int> result;
        while(!q.empty()){
            TreeNode* current=q.front();
            q.pop();
            result.push_back(current->val);
        }
        return result;
        
    }
    void markedparent(TreeNode* root, unordered_map<TreeNode* , TreeNode*> &trackparent,TreeNode* target){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            if(curr->left){
                trackparent[curr->left]=curr;
                q.push(curr->left);
            }
            if(curr->right){
                trackparent[curr->right]=curr;
                q.push(curr->right);
            }
        }
    }
};