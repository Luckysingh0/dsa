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
    int deepestLeavesSum(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*>q;
        q.push(root);
        int currsum=0;
        while(!q.empty())
        {
             int sum=0;
            int levelsize=q.size();
            for(int i=0;i<levelsize;i++)
            {
                TreeNode*node=q.front();
                q.pop();
                sum=sum+node->val;
                if(node->left) q.push(node->left);
                if(node->right)  q.push(node->right);
            }
            currsum=sum;
        }
        return currsum;


    }
};