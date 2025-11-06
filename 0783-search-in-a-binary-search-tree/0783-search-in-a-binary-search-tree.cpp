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
    // Function to search for a value in BST and return the node
    TreeNode* BST(TreeNode* root, int val) {
        if (root == nullptr) return nullptr;

        if (root->val == val) return root;
        else if (root->val > val) return BST(root->left, val);
        else return BST(root->right, val);
    }

    TreeNode* searchBST(TreeNode* root, int val) {
        return BST(root, val);
    }
};
