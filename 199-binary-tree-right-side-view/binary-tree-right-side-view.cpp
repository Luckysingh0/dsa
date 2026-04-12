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
    vector<int> rightSideView(TreeNode* root) {
         if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<int>res;
        while(!q.empty()){
            int levelsiz=q.size();
            vector<int>currl;
            TreeNode* node=NULL;
            for(int i=0;i<levelsiz;i++)
            {
                if(levelsiz==2)
                {
                    if(node != NULL) 
                {

                    q.pop();
                    if(node->left)q.push(node->left);
                    if(node->right)q.push(node->right);
                }

                }
                TreeNode* node=q.front();
                q.pop();
                currl.push_back(node->val);
                if(node->left)q.push(node->left);
                 if(node->right)q.push(node->right);
            }
            res.push_back(currl.back());
        }
        return res;
    }
};