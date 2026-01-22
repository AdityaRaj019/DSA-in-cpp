#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

Node* detectCycle(Node* &head){
    if(head == NULL) return nullptr;

    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL && slow!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast) return slow;
    }
    return nullptr;
}
int main() {
      
    cout << "" << endl;
    return 0;
}