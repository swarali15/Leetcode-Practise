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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode* n= new TreeNode(val);
            n->left=root;
            return n;
        }
        else
        {
            insert(root,val,1,depth);
            return root;
        }
        
    }
    void insert(TreeNode* root, int val, int ht, int d)
    {
        if(root==NULL) return;
        if(ht==d-1)
        {
            TreeNode* cur= root->left;
            root->left= new TreeNode(val);
            root->left->left= cur;
            
            cur= root->right;
            root->right= new TreeNode(val);
            root->right->right=cur;
            
        }
        else
        {
            insert(root->left, val,ht+1,d);
            insert(root->right,val,ht+1,d);
        }
    }
};