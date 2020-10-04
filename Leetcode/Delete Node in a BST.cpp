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
public:
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (root == NULL)
            return root;

        if (key < root->val)
            root->left = deleteNode(root->left, key);
        else if (key > root->val)
            root->right = deleteNode(root->right, key);
        else
        {
            if (!root->right)
                return root->left;
            else
            {
                TreeNode *succ = root->right;
                while (succ->left)
                    succ = succ->left;
                swap(root->val, succ->val);
                root->right = deleteNode(root->right, key);
                return root;
            }
        }
        return root;
    }
};