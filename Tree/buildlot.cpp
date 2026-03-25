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
void levelOrder(node *root){
    queue<node*>q;
    q.push(root);

    while(!q.empty()){
        node *temp = q.front();
        q.pop();

        cout<<temp->data<<" ";

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
void buildFromLot(node* &root){
    queue<node*>q;
    int data;
    cout<<"Enter root data: ";
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        int leftData;
        cout<<"Enter the data to the left of  " << temp->data;
        cin>>leftData;
        node* leftNode = new node(leftData);
        if(leftData!= -1){
            temp->left = leftNode;
            q.push(leftNode);
        }
         int rightData;
        cout<<"Enter the data to the right of  " << temp->data;
        cin>>rightData;
        node* rightNode = new node(rightData);
        if(rightData!= -1){
            temp->right = rightNode;
            q.push(rightNode);
        }

    }
}
int main() {
    node *root = NULL;
    buildFromLot(root);
    levelOrder(root);

    // cout << "" << endl;
    return 0;
}