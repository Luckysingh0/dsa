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
int maxi(TreeNode* root,int &ans)
{
    if(root==NULL)
    return 0;
    int lef=maxi(root->left,ans);
   int righ= maxi(root->right,ans);
   ans= 1+max(lef,righ);
   return ans;



}
    int maxDepth(TreeNode* root) {
        int ans=0;
        maxi(root,ans);
        return ans;
    }
};