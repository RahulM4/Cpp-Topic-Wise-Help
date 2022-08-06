#include<bits/stdc++.h>
using namespace std;
#define ll long long


class TreeNode
{    
    public:
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int findMaxpath(TreeNode* root, int &ans)
{
    if(root==NULL) return 0;
    int left=findMaxpath(root->left,ans);
    left = max(left,0);
    int right=findMaxpath(root->right,ans);
    right = max(right,0);
    ans = max(ans,left+right+root->val);
    return max(left,right)+root->val;
    
    
}

class Solution
{
public:
  int maxPathSum(TreeNode* root)
  {
    int ans=INT_MIN;
    findMaxpath(root,ans);
    return ans;
    
  }
    
    
    
};

int main()
{
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    cout << s.maxPathSum(root) << endl;
    return 0;
}
