/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
         if(depth == 1) {  
        TreeNode* newRoot = new TreeNode(val);
        newRoot->left = root;
        return newRoot;
    }
        queue<TreeNode*> q;
        q.push(root);
        int curr = 0;
        while (!q.empty()) {
            int levelsize = q.size();
            curr++;
            for (int i = 0; i < levelsize; i++) {
                TreeNode*node=q.front();
                q.pop();
                if (curr == depth - 1) {
                    TreeNode* newLeft = new TreeNode(val);
                    newLeft->left = node->left;
                    node->left = newLeft;

                    TreeNode* newRight = new TreeNode(val);
                    newRight->right = node->right;
                    node->right = newRight;
                }
                if(node->left)  q.push(node->left); 
                if(node->right) q.push(node->right);

            }
        }
        return root;
    }
};