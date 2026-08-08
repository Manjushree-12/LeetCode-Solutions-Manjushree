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
    vector<string> binaryTreePaths(TreeNode* root) {
                         
                         vector<string>ans;
                         if(!root){ return ans;}
                         path(root,ans,"");
                         return ans;
         
    }
    void path(TreeNode* root, vector<string>&ans,string s)
    {   
       if(root==nullptr){ return;}
        if(s.empty()){ s+=to_string(root->val);}
       else {s += "->" + to_string(root->val);}
        if(root->right==nullptr && root->left==nullptr){  ans.push_back(s); return;}
        path(root->right,ans,s);
        path(root->left,ans,s); 

    }
};