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
    vector<vector<int>> levelOrder(TreeNode* root) {
        //step 1
        if (root == nullptr) {
            return vector<vector<int>>();
        }
        //step 2 
        queue<TreeNode*>q;
        q.push(root);

        //step 3
        vector<vector<int>> result;

        while (!q.empty()){
            vector<int> level;
            int size = q.size();

            for (int i{0}; i < size; i++){
                TreeNode* node = q.front(); q.pop();
                level.push_back(node->val);

                if (node->left){
                    q.push(node->left);
                }
                if (node->right){
                    q.push(node->right);
                }
            }
            result.push_back(level);
        }
        return result;
    }
};
/* Steps
    1. Edege case when the root is null, we return an empty list
    2. Create an empty queue and we will add the root node to it 
    3. Intitialize an empty list of lists to store the level wise node values
    4. While the queue is not empty. (since we covered out edge case already, we can assume 
        there are more nodes available)
        i. Initialize an empty list of store the current levels node values 
        ii. Get the size of the queue (the number of nodes at the current level)
        iii. For each node at the current level, dequeue each node from the queue,
             since we put out visited nodes in the queue, add the value of hte node to the 
             current levels list, and enqueue both the left and right children, if they exist
        iiii. Add the current levels lsit to the final result
    5. Return the list of lists
*/
    //Input 
// Root of our binary tree
    //What DS.ALGO.TECH
// DFS + queue
    //What do we do with the data
//
    //Output
// Return the value of the nodes in a traversal order from left to right by level