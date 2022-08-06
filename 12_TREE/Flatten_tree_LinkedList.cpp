#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
class TreeNode
{   
    public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


//flatten tree into linked list
class Solution
{
public:
    void flatten(TreeNode *root)
    {
        if (!root)
            return;
        flatten(root->left);
        flatten(root->right);
        if (root->left)
        {
            TreeNode *temp = root->left;
            while (temp->right)
                temp = temp->right;
            temp->right = root->right;
            root->right = root->left;
            root->left = NULL;
        }
    }
};

int main()
{
    FIO;
    
   
}