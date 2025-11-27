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
    bool hasPathSum(TreeNode* root, int targetSum) {
  
     return recur_path(root,targetSum);
        
    }

    bool recur_path(TreeNode* root,int t)
    {        if(root==NULL)return false;
             t-=root->val;
              
               if(!root->left && !root->right)
               {
                return (t==0);
               }
            return recur_path(root->left,t)||recur_path(root->right,t);         
    }
};