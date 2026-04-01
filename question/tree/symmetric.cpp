#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

bool isMirror(TreeNode* p , TreeNode* q){
        if(p==NULL && q==NULL){
            return true;
        }
        if(p==NULL || q==NULL)return false;
        return (p->val == q->val && isMirror(p->left,q->right) && isMirror(p->right,q->left));
    }
     bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;
        // TreeNode* p = root->left;
        // TreeNode* q = root->right;
        // bool ans = isMirror(p,q);
        // return ans;
        return isMirror(root->left,root->right);
    }
int main() {
      
    cout << "" << endl;
    return 0;
}