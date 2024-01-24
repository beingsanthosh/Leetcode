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
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<pair<TreeNode*, bitset<10>>> stack;
        stack.emplace_back(root, 0);
        int ans=0;
        while(!stack.empty()){
            auto [node, parity]=stack.back();
            stack.pop_back();
            int x=node->val;
            parity.flip(x);
        //    cout<<x<<" with parity="<<parity<<endl;
            if (!node->left && !node->right){
                if(parity.count()<=1) ans++;
                continue;
            }
            else{
                if (node->right) stack.emplace_back(node->right, parity);
                if (node->left) stack.emplace_back(node->left, parity);
            } 
        }
        return ans;
    }
};