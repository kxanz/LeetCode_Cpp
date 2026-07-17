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
    bool isBalanced(TreeNode* root) {
        dfs(root); 
        return balanced;

        
    }
private:
bool balanced = true;
    int dfs (TreeNode* node) {
        if (!node) return true;
        int left { dfs(node->left) };
        int right { dfs(node->right) };

        if (abs(left - right) > 1)
            balanced = false;

        return 1 + max(left, right); 



    }
};
