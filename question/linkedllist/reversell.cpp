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


void reverse(Node* &head){
    Node* curr = head;
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }  
    head = prev; 
}  
void reverse(Node* &Head)
int main() {
    Node* first = new Node(3);
    Node* head = first;
    Node* tail = first;
    insertAtposi(head,tail,2,5);
    insertAtposi(head,tail,3,7);
    insertAtposi(head,tail,4,9);
    print(head);
    reverse(head);
    print(head);
    cout<<head->data;
    // cout << "" << endl;
    return 0;
}