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
 
 void RLPS(vector<vector<int>> &r,vector<int >&temp,TreeNode* A,int S )
 {
        if(A==NULL)
        {
                return;
        }
        S=S-A->val;
        temp.emplace_back(A->val);
        if(S==0 && A->left==NULL && A->right==NULL)
        {
                r.emplace_back(temp);
        }
        if(A->left!=NULL)
        {
                RLPS(r,temp,A->left,S);
        }
        if(A->right!=NULL)
        {
                RLPS(r,temp,A->right,S);
        }
        temp.pop_back();
 }
 
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    
    vector<vector<int>> r;
    vector<int >temp;
  //  int i=0;
    RLPS(r,temp,A,B);
    return r;
}
