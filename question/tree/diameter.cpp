#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
 // pair<int,int>diameterFast(TreeNode* root){
    //     if(root==NULL){
    //         pair<int,int>p = make_pair(0,0);
    //         return p;
    //     }

    //     pair<int,int>left = diameterFast(root->left);
    //     pair<int,int>right = diameterFast(root->right);

    //     int op1 = left.first;
    //     int op2 = right.first;
    //     int op3 = left.second + right.second ;

    //     pair<int,int>ans;
    //     ans.first = max(op1,max(op2,op3));
    //     ans.second = max(left.second,right.second)+1;
    //     return ans;
    // }
    int diameter = 0;
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);
        diameter = max(diameter,left+right);
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        // return diameterFast(root).first;
        height(root);
        return diameter;
    }

int main() {
      
    cout << "" << endl;
    return 0;
}