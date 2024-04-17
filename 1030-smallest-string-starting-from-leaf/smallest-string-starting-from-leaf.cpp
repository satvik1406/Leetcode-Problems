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
    void smallestLeaf(TreeNode* root, string tempString, vector<string>& res) {
        if(root == NULL) return;
        if(!root->left && !root->right){
            tempString = char(97 + root->val) + tempString;
            res.push_back(tempString);
            return;
        }
        tempString = char(97 + root->val) + tempString;
        smallestLeaf(root->left,tempString,res);
        smallestLeaf(root->right,tempString,res);
    }

    string smallestFromLeaf(TreeNode* root) {
        vector<string> res;
        smallestLeaf(root,"",res);
        sort(res.begin(),res.end());

        return res[0];
    }
};