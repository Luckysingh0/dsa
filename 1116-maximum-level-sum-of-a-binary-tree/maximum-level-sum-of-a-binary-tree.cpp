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
    int maxLevelSum(TreeNode* root) {
        int depth=0;
        int anslev=0;
        int maxsum=INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int levelsize=q.size();
            vector<int>currlev;
            for(int i=0;i<levelsize;i++)
            {
                TreeNode*node=q.front();
                q.pop();
                currlev.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            int sum=0;
            depth++;           
            for(int x:currlev)
            {
                sum=sum+x;
            }
            if(sum>maxsum)
            {
                maxsum=sum;
                anslev=depth;
            }
        }
        return anslev;
    }
};