#include<bits/stdc++.h>
using namespace std;

//TreeNode
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
//postorder
void postorder(TreeNode* root, vector<int> &v){
    if(root==NULL){
        return;
    }
    postorder(root->left,v);
    postorder(root->right,v);
    v.push_back(root->data);

}

//1 0 1 3 2

class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        if(root->left==NULL && root->right==NULL){
            return root->data;
        }
        bool left = evaluateTree(root->left);
        bool right = evaluateTree(root->right);
        if(root->data==0){
            return left && right;
        }
        else{
            return left || right;
        }
       
       
        
           
        
    }
};

int main(){
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(1);
    Solution s;
    cout<<s.evaluateTree(root);
    return 0;
}