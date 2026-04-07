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
    int siz1(TreeNode* root,int &size)
    {
        if(root==NULL)
        return 0 ;
        int left=siz1(root->left,size);
        
        int right=siz1(root->right,size);
        size=max(size,left+right);
        return max(left,right)+1;
    
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int size=INT_MIN;
        siz1(root,size);
        return size;
    }
};