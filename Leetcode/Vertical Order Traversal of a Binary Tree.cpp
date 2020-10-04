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
class Solution
{
    map<int, set<pair<int, int>>> mp;
    void verticalOrder(TreeNode *root, int vl, int hl)
    {
        if (!root)
            return;
        mp[hl].insert({vl, root->val});
        verticalOrder(root->left, vl + 1, hl - 1);
        verticalOrder(root->right, vl + 1, hl + 1);
    }

public:
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {

        verticalOrder(root, 0, 0);
        vector<vector<int>> ans;
        for (auto m : mp)
        {
            vector<int> v;
            for (auto e : m.second)
                v.push_back(e.second);
            ans.push_back(v);
        }
        return ans;
    }
};