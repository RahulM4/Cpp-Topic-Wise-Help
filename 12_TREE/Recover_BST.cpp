#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
//**Inportant propert of bst => inorder traversal of BST => sorted array

class TreeNode{
public: 
    int val;
    TreeNode* left, *right;
    TreeNode(int val)
    {
        this->val= val;
        this->left = this-> right = NULL;

    }
};

void inorder(TreeNode* root, vector<int>& v)
{
    if(root == NULL)
        return;
    inorder(root->left, v);
    v.push_back(root->val);
    inorder(root->right, v);
}
void BuildTree(TreeNode * root , TreeNode * &prev, TreeNode* &first, TreeNode* &end)
{
    if(root == NULL)
        return;
    BuildTree(root->left, prev, first, end);
    if(prev)
    {
        if(prev->val > root->val)
        {
            if(first == NULL)
                first = prev;
            end = root;
        }
    }
    prev = root;
    BuildTree(root->right, prev, first, end);

}
class Solution {
public:
    void recoverTree(TreeNode* root) {
        
            TreeNode * prev = NULL, * first = NULL, * end = NULL;
            BuildTree(root, prev, first, end);
            if(first && end)
            {
                int temp = first->val;
                first->val = end->val;
                end->val = temp;
            }

    }
    
};
//print treee
void printTree(TreeNode* root)
{
    if(root == NULL)
        return;
    printTree(root->left);
    cout<<root->val<<" ";
    printTree(root->right);
}

int main()
{
   int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    TreeNode* root = new TreeNode(v[0]);
    TreeNode* prev = root;
    for(int i=1;i<n;i++)
    {
        TreeNode* temp = new TreeNode(v[i]);
        prev->right = temp; 
        prev = temp;
    }
    Solution s;
    s.recoverTree(root);
    printTree(root);
    return 0;
}