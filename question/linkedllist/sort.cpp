#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
Node* findMid(Node* head){
    Node* slow  = head;
    Node* fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node* merge(Node* left,Node* right){
    if(left==NULL) return right;
    if(right==NULL) return left;

    Node* ans = new Node(-1);
    Node* temp = ans;
    while(left!=NULL && right!=NULL){
        if(left->val<right->val){
            temp->next = left;
            temp = left;
            left = left->next;
        }else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while(left!=NULL){
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while(right!=NULL){
         temp->next = right;
         temp = right;
         right = right->next;
    }
    temp = ans;
    ans = ans->next;
    delete temp;
    return ans;


}
Node* mergeSort(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* temp = head;
    Node* mid = findMid(head);
    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;
    left = mergeSort(left);
    right = mergeSort(right);

    
}
int main() {
      
    cout << "" << endl;
    return 0;
}