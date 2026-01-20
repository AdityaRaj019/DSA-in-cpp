#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        ListNode* check = head;
        int cnt = 0;
        while(check!=NULL && cnt<k){
            check  = check->next;
            cnt++;
        }
        if(cnt<k)return head;
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* temp = NULL;
        cnt=0;
        while(curr!=NULL && cnt<k){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            cnt++;
        }
        if(temp!=NULL){
            head->next =reverseKGroup(temp,k);
        }
        return prev;
    }

int main() {
      
    cout << "" << endl;
    return 0;
}