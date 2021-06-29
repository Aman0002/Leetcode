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
        
        if (!root)
            return {};
        vector<vector<int>> ans;
        
        queue<TreeNode *> q;
        
        bool straight = true;
        
        q.push(root);
        
        while (q.size())
        {
            if (straight)
            {
                vector<int> temp;
                int x = q.size();
                while (x--)
                {
                    TreeNode * x = q.front();
                    q.pop();
                    temp.push_back(x->val);
                    
                    if (x->left)
                        q.push(x->left);
                    
                    if (x->right)
                        q.push(x->right);
                    
                }
                ans.push_back(temp);
                straight = false;
            }else
            {
               vector<int> temp;
                int x = q.size();
                while (x--)
                {
                    TreeNode * x = q.front();
                    q.pop();
                    temp.push_back(x->val);
                    
                    if (x->left)
                        q.push(x->left);
                    
                    if (x->right)
                        q.push(x->right);
                    
                }
                reverse(temp.begin(),temp.end());
                ans.push_back(temp);
                straight = true;
            }
        }
        
        return ans;
    }
};