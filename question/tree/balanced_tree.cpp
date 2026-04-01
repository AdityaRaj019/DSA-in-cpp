#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

pair<bool,int>balance(Node* root){
        if(root == NULL){
            pair<bool,int>p = make_pair(true,0);
            return p;
        }
        pair<bool,int>left = balance(root->left);
        pair<bool,int>right = balance(root->right);
        
        bool leftAns = left.first;
        bool rightAns = right.first;    
        bool diff = abs(left.second-right.second)<=1;
        pair<bool,int>ans;
        ans.second = max(left.second,right.second)+1;
        if(diff && leftAns && rightAns){
            ans.first = true;
        }else{
            ans.first = false;
        }
        return ans;
        
    }

    bool isBalanced(Node* root) {
        // code here
        
        return balance(root).first;
    
    }
int main() {
      
    cout << "" << endl;
    return 0;
}