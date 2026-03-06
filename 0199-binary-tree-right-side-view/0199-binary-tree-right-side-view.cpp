class Solution {
public:
    vector<int> ans;

    void rightView(TreeNode* root, int level) {
        if(root == NULL) return;

        if(level == ans.size()) {
            ans.push_back(root->val);
        }

        rightView(root->right, level + 1);
        rightView(root->left, level + 1);
    }

    vector<int> rightSideView(TreeNode* root) {
        rightView(root, 0);
        return ans;
    }
};