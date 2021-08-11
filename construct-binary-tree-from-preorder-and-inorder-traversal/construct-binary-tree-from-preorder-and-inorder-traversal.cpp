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
    TreeNode * helper (vector<int>& pre, vector<int>& in , int preS , int preE,int inS , int inE , unordered_map<int , int >&m)
    {
        //Base Conditions
        if (preS>preE) return NULL;
        
        if (inS>inE) return NULL;
        
        //making root
        TreeNode *root = new TreeNode (pre[preS]);
        
        int pos = m[root->val];
        
        root->left = helper (pre , in ,preS + 1 , pos -inS +preS, inS  ,pos-1  , m);
        
        root->right = helper (pre ,in , preE -inE + pos +1 , preE , pos+1 , inE , m);
        
        return root;
        
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        //map for storing index of each element
        unordered_map<int , int > m;
        
        for (int i=0 ; i < inorder.size() ; i++)
            m[inorder[i]] = i;
        
        
        return helper (preorder , inorder , 0 , preorder.size()-1 , 0 , inorder.size()-1 ,m );
    }
};