#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

class node{
    public:
        int data;
        node *left;
        node *right;

        node(int d){
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};

node *buildTree(node *root){
    cout << "Enter the data: ";
    int data;
    cin >> data;
    root = new node(data);
    if(data==-1)return NULL;
    cout << "Enter data to left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data to right of " << data << endl;
    root->right = buildTree(root->right);
    
    return root;

}
void inorderTraversal(node *root){
    if(!root) return;
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}
int main() {
    node *root = NULL;
    root = buildTree(root);
    cout<<endl;
    cout<<"Preorder: " << endl;
    inorderTraversal(root);
    // cout << "" << endl;
    return 0;
}