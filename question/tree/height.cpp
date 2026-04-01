#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        // int ans = max(left,right)+1;
        return max(left,right)+1;
        // int count = 0;
        // if(root==NULL){
        //     return 0;
        // }
        // queue<TreeNode*>q;

        // q.push(root);
        // // count++;

        // while(!q.empty()){
        //     int size = q.size();
        //     for(int i= 0;i<size;i++){
        //         TreeNode* temp = q.front();
        //         q.pop();
        //         if(temp->left !=NULL){
        //             q.push(temp->left);
        //         }
        //         if(temp->right!=NULL){
        //             q.push(temp->right);
        //         }
        //     }
        //     count++;
        // }
        // return count;
    }
int main() {
      
    cout << "" << endl;
    return 0;
}