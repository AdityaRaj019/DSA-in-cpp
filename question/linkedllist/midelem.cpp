#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
    ~Node()
    {
        // int value = this->data;
        // if (this->next != NULL)
        // {
        //     delete next;
        //     this->next = NULL;
        // }
    }
};
void insertAtHead(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}
void insertAtlast(Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
}
void insertAtposi(Node *&head, Node *&tail, int posi, int data)
{
    Node *curr = new Node(data);
    Node *temp = head;
    if (posi == 1)
    {
        insertAtHead(head, data);
        return;
    }
    int cnt = 1;
    while (cnt < posi-1 && temp!=NULL)
    {
        temp = temp->next;
        cnt++;
    }
    curr->next = temp->next;
    temp->next = curr;
    if (temp->next == NULL)
    {
        insertAtlast(tail, data);
        return;
    }
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getLength(Node* &head){
    Node* temp = head;
    int cnt = 0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
Node* midelem(Node* &head){
    // int n = getLength(head);
    // int midposi = (n/2).;
    // Node* temp = head;
    // int cnt =0;
    // while(cnt<midposi){
    //     temp = temp->next;
    //     cnt++;
    // }
    Node* slow = head;
    Node* fast = head->next;
    if(head==NULL){
        return head;
    }
    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    // return temp;
    return slow;
}

int main() {
    Node* first = new Node(3);
    Node* head = first;
    Node* tail = first;
    insertAtposi(head,tail,2,5);
    insertAtposi(head,tail,3,7);
    insertAtposi(head,tail,4,9);
    insertAtposi(head,tail,5,10);
    // print(head);
    Node* mid = midelem(head);
    // cout<<getLength(head);
    cout<<mid->data;
    return 0;
}