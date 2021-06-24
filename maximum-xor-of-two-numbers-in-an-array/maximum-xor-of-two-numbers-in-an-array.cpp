class TrieNode{
public:
    TrieNode* left;
    TrieNode* right;
};

class Solution {
public:
    void insert(TrieNode* head,int n){
        TrieNode* root = head; 
        for(int i=31;i>=0;i--){
            int val = (n>>i)&1;
            if(val==0){
                if(!root->left){
                    root->left = new TrieNode();
                }
                root = root->left;
            }else{
                if(!root->right){
                    root->right = new TrieNode();
                }
                root = root->right;
            }
        }
    }
    
    int getmax_xor(vector<int>& nums,TrieNode* node,int n){
        int max_xor = INT_MIN;
        for(int i=0;i<n;i++){
            int val = nums[i],curr_xor=0;
            TrieNode* root = node;
            for(int j=31;j>=0;j--){
                int nu = (val>>j)&1;
                if(nu==0){
                    if(root->right){
                        curr_xor += (1<<j);
                        root = root->right;
                    }else{
                        root = root->left;
                    }
                }else{
                    if(root->left){
                        curr_xor += (1<<j);
                        root = root->left;
                    }else{
                        root = root->right;
                    }
                }
            }
            max_xor = max(max_xor,curr_xor);
        }
        return max_xor;
    }
    
    int findMaximumXOR(vector<int>& nums) {
        TrieNode* root = new TrieNode();
        for(int i=0;i<nums.size();i++){
            insert(root,nums[i]);
        }
        return getmax_xor(nums,root,nums.size());
    }
};