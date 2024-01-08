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
        if(root==NULL) return;
        vet.push_back(root->val);
        fun(root->left,vet);
        fun(root->right,vet);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>vet;
        fun(root,vet);
        sort(vet.begin(),vet.end());
        return vet[k-1];
    }
};