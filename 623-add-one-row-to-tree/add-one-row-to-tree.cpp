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
    void addRow(TreeNode* root, int val, int depth, int currentDepth){
        if(root == NULL) return;
        if(currentDepth == depth-1){
            TreeNode* leftNode = new TreeNode(val,root->left, NULL);
            root->left = leftNode;

            TreeNode* rightNode = new TreeNode(val,NULL, root->right);
            root->right = rightNode;

            return;
        }
        addRow(root->left,val,depth,currentDepth+1);
        addRow(root->right,val,depth,currentDepth+1);
    }

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* rootNode = new TreeNode(val,root, NULL);
            return rootNode;
        }
        addRow(root,val,depth,1);

        return root;
    }
};