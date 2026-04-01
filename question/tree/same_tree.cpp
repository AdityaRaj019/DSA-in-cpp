#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

 bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL){
            return true;
        }
        if(p==NULL || q==NULL){
            return false;
        }

        return p->val == q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
int main() {
      
    cout << "" << endl;
    return 0;
}