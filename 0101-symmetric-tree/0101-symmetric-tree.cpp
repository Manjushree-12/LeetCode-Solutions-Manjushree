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
    bool isSymmetric(TreeNode* root) {
       if(!root) return true;
       return isSame(root->left,root->right);


     
        
    }
    bool isSame(TreeNode*l,TreeNode*r)
    {
        if(!l && !r) return true;
        if(!l || !r) return false;
        return(l->val==r->val)&&isSame(l->left,r->right)&&isSame(l->right,r->left);

    }
};