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
    int pre(TreeNode* root,int maxsofar,int &count)
    {
        if(!root) return NULL;
        if(root->val>=maxsofar) count++;
        maxsofar=max(maxsofar,root->val);

        pre(root->left,maxsofar,count);
        pre(root->right,maxsofar,count);
        return count;
    }
    int goodNodes(TreeNode* root) {
        int count=0;
        pre( root,INT_MIN,count);
        return count;
    }
};