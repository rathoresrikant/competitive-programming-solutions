/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
/* Author : Saurav Dubey */ 
 
void invert(TreeNode *A)
 {
        if(A==NULL)
        {
            return ;
        }
        else
        {
        invert(A->left);
        invert(A->right);
        TreeNode * temp=A->left;
        A->left=A->right;
        A->right=temp;
        }
        
        
 }
 
 
TreeNode* Solution::invertTree(TreeNode* A) {
    
    
     invert(A);
    return A;
}
