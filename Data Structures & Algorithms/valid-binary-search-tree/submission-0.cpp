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
  public: bool isValidBST(TreeNode * root) {
    //Step 1
    return isValidBSTHelper(root, nullptr, nullptr);
  }

  //Step 2
  private:
  bool isValidBSTHelper(TreeNode *node, TreeNode *minNode, TreeNode *maxNode){

    //Step3
    if(node == nullptr){
      return true;
    }

    //Step 4: Check if the value of the current node is within the allowed range (greater than the minimum and less than the maximum), if not 
    if((minNode && node->val <= minNode->val) || (maxNode && node->val >= maxNode->val)){
      return false;
    }

    //Step 5: left subtree
    if(!isValidBSTHelper(node->left, minNode, node)){
      return false;
    }

    //Step 6: right subtree
    if(!isValidBSTHelper(node->right, node, maxNode)){
      return false;
    }
    //Step 7
    return true;

  }
};