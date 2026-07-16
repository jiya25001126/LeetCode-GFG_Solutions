/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (root == NULL)
            return 0;

        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});

        int ans = 0;

        while (!q.empty()) {

            int n = q.size();
            long long mini = q.front().second;

            long long first, last;

            for (int i = 0; i < n; i++) {

                auto curr = q.front();
                q.pop();

                long long idx = curr.second - mini;

                if (i == 0)
                    first = idx;
                if (i == n - 1)
                    last = idx;

                if (curr.first->left)
                    q.push({curr.first->left, 2 * idx + 1});

                if (curr.first->right)
                    q.push({curr.first->right, 2 * idx + 2});
            }

            ans = max(ans, (int)(last - first + 1));
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna