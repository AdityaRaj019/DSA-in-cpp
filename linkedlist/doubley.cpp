#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node*& head, Node*& tail, int data) {
    Node* temp = new Node(data);

    if (head == NULL) {
        head = tail = temp;
        return;
    }

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtLast(Node*& head, Node*& tail, int data) {
    Node* temp = new Node(data);

    if (tail == NULL) {
        head = tail = temp;
        return;
    }

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosi(Node*& head, Node*& tail, int pos, int data) {
    if (pos == 1) {
        insertAtHead(head, tail, data);
        return;
    }

    Node* curr = head;
    int cnt = 1;

    while (cnt < pos - 1 && curr != NULL) {
        curr = curr->next;
        cnt++;
    }

    if (curr->next == NULL) {
        insertAtLast(head, tail, data);
        return;
    }

    Node* temp = new Node(data);
    temp->next = curr->next;
    temp->prev = curr;
    curr->next->prev = temp;
    curr->next = temp;
}

void deleteAtHead(Node*& head, Node*& tail) {
    if (head == NULL) return;

    Node* temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;
    else
        tail = NULL;

    delete temp;
}

void deleteAtPosi(Node*& head, Node*& tail, int pos) {
    if (head == NULL) return;

    if (pos == 1) {
        deleteAtHead(head, tail);
        return;
    }

    Node* curr = head;
    int cnt = 1;

    while (cnt < pos && curr != NULL) {
        curr = curr->next;
        cnt++;
    }

    if (curr == NULL) return;

    if (curr->next == NULL) {
        tail = curr->prev;
        tail->next = NULL;
        delete curr;
        return;
    }

    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;
    delete curr;
}

void print(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    insertAtLast(head, tail, 30);
    insertAtPosi(head, tail, 2, 15);

    print(head);

    deleteAtHead(head, tail);
    deleteAtPosi(head, tail, 2);

    print(head);
}
