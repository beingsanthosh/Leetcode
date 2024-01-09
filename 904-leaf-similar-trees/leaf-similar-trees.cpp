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
    void fun(TreeNode* root,vector<int>&vet)
    {
       if(root==NULL)
       {
           return ;
       }
       fun(root->left,vet);
       if(root->left==NULL and root->right==NULL)
       {
           vet.push_back(root->val);
       }
       fun(root->right,vet);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>vet;
        fun(root1,vet);
        vector<int>v(vet);
        vet.clear();
        fun(root2,vet);
        if(vet==v) return true;
        return false;
    }
};