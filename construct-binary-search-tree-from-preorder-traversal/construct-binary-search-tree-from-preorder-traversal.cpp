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
TreeNode * insert_node (TreeNode *root,int x){
            
    //If root will become NULL
    if (!root)
        return new TreeNode(x);

     if (x>root->val)
         root->right = insert_node(root->right,x);
    else
        root->left = insert_node(root->left,x);
        
    return root;
}

TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        
        TreeNode * root = new TreeNode(preorder[0]);
        for (int i=1 ;i<preorder.size() ; i++)
            insert_node (root,preorder[i]);
        
        
        return root;
}
};