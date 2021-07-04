#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
bool search(Node* root, int x);
Node *insert(Node *tree, int val)
{
    Node *temp = NULL;
    if (tree == NULL)
        return new Node(val);
    if (val < tree->data)
    {
        tree->left = insert(tree->left, val);
    }
    else if (val > tree->data)
    {
        tree->right = insert(tree->right, val);
    }
    
    return tree;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root = NULL;
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            root = insert(root, k);
        }
        int s;
        cin>>s;
        
     cout<<search(root,s);
     cout<<endl;
    }
}

bool search(Node* root, int x)
{
    while(root!=NULL){
        if(root->data==x){
            return true;
        }
        else if(root->data<x)
            root=root->right;
        else
            root=root->left;
    }
    return false;
}