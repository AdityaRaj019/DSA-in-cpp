#include <iostream>
#include <vector>
#include <bits/stdc++.h>

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
    while (cnt < posi)
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
void deleteAtHead(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty";
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}
void deleteAtPosi(Node* &head, Node* &tail, int posi)

{
    if (head == NULL)
    {
        cout << "List is empty";
    }
    if (posi == 1)
    {
        deleteAtHead(head);
        return;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < posi)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if (curr->next == NULL)
        {
            prev->next = NULL;
            tail = prev;
            delete curr;
            return;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

Node* sort(Node* &head){
    if(head==NULL) return head;
    Node* zero  = new Node(-1);
    Node* one = new Node(-1);
    Node* two = new Node(-1);
    Node* zero_head = zero;
    Node* zero_tail = zero;

    Node* one_head = one;
    Node* one_tail = one;

    Node* two_head = two;
    Node* two_tail = two;

    Node* temp = head;

    while(temp!=NULL){
        if(temp->data==0){
            insertAtlast(zero_tail,temp->data);
        }else if(temp->data==1){
            insertAtlast(one_tail,temp->data);
        }else{
            insertAtlast(two_tail,temp->data);
        }
        temp = temp->next;
    }
    temp = zero_head;
    zero_head = zero_head->next;
    temp->next=NULL;
    delete temp;
    temp = one_head;
    zero_tail->next = one_head->next;
    one_head->next = NULL;
    delete one_head;

    one_tail->next = two_head->next;
    two_head->next = NULL;
    delete two_head;

    return zero_head;
    


}

int main()
{

    Node *first = new Node(1);
    Node *head = first;
    Node *tail = first;
    insertAtlast(tail,1);
    insertAtlast(tail,0);
    insertAtlast(tail,0);
    insertAtlast(tail,2);
    insertAtlast(tail,2);
    print(head);
    Node *sorted = new Node(-1);
    sorted->next = sort(head);
    Node* temmp = sorted;
    sorted = sorted->next;
    temmp->next = NULL;
    delete temmp;
    print(sorted);
    return 0;
}