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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> q;
        
        if (!root) return result;
        q.push(root);
        bool from_left = true;
        while (!q.empty()) {
            int level_size = q.size();
            vector<int> current;

            for (int i = 1; i <= level_size; i++) {
                TreeNode* node = q.front(); q.pop();
                current.push_back(node->val);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            if (!from_left) {
                reverse(current.begin(), current.end());
            }
            result.push_back(current);
            from_left = !from_left;
        }
        return result;
    }
};