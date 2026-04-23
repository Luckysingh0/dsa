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
    int countnodes(TreeNode*root)
    {
        if(!root) return 0;
        return 1+countnodes(root->left)+countnodes(root->right);
    }
    bool dfs(TreeNode* root,int idx,int totalnodes){
        if(!root) return true;
        if(idx>totalnodes)
        return false;
        
        return dfs(root->left,2*idx,totalnodes)&& dfs(root->right,2*idx+1,totalnodes);
    }
    bool isCompleteTree(TreeNode* root) {
        int totalnodes=countnodes(root);
        int idx=1;
        return dfs(root,idx,totalnodes);
    }
};