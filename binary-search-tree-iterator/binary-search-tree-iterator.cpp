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
class BSTIterator {
public:
    vector<int> preorder;
    int it = -1 ;
    void print_preorder (TreeNode *root , vector<int> &preorder)
    {
        if (!root)
            return ;
        
        print_preorder(root->left,preorder);
        preorder.push_back(root->val);
        print_preorder(root->right,preorder);
        
    }
    BSTIterator(TreeNode* root) {
        
        it = 0;
        print_preorder(root, preorder);
    }
    
    int next() { 
        return preorder[it++];
    }
    
    bool hasNext() {
        
        if (it==preorder.size())
            return false;
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */