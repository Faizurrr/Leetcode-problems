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

    void traversal(TreeNode* root, string path, vector<string>& ans) {

        if(root == nullptr) 
            return;

    
        path += to_string(root->val);


        if(root->left == nullptr && root->right == nullptr) {
            ans.push_back(path);
            return;
        }

        traversal(root->left, path, ans);
        traversal(root->right, path, ans);
    }

    int sumRootToLeaf(TreeNode* root) {

        vector<string> ans;
        traversal(root, "", ans);

        int sum = 0;

        for(int i = 0; i < ans.size(); i++) {
            int num = stoi(ans[i], nullptr, 2);
            sum += num;
        }

        return sum;
    }
};