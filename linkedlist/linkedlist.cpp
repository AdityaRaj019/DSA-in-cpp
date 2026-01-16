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
int main()
{

    Node *first = new Node(30);
    Node *head = first;
    Node *last = first;
    // cout << head->data << endl;
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    insertAtposi(head, last, 1, 40);
    insertAtlast(last, 60);
    print(head);
    deleteAtHead(head);
    deleteAtPosi(head,last,4);
    // cout<<last->data;
    print(head);
    deleteAtPosi(head,last,2);
    print(head);
    // cout<<last->data;

    // cout << head->next<< endl;
    return 0;
}