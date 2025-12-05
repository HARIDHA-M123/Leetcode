class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root) return {};
        vector<vector<int>> res;
        queue<TreeNode*> q{{root}};
        bool rev = false;

        while (!q.empty()) {
            vector<int> level;
            for (int i = q.size(); i > 0; i--) {
                auto n = q.front(); q.pop();
                level.push_back(n->val);
                if (n->left) q.push(n->left);
                if (n->right) q.push(n->right);
            }
            if (rev) reverse(level.begin(), level.end());
            rev = !rev;
            res.push_back(level);
        }
        return res;
    }
};
