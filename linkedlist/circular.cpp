#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node*& head, Node*& tail, int data) {
    Node* temp = new Node(data);

    if (head == NULL) {
        head = tail = temp;
        tail->next = head;
        return;
    }

    temp->next = head;
    head = temp;
    tail->next = head;
}

void insertAtLast(Node*& head, Node*& tail, int data) {
    Node* temp = new Node(data);

    if (tail == NULL) {
        head = tail = temp;
        tail->next = head;
        return;
    }

    tail->next = temp;
    tail = temp;
    tail->next = head;
}

void deleteAtHead(Node*& head, Node*& tail) {
    if (head == NULL) return;

    if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }

    Node* temp = head;
    head = head->next;
    tail->next = head;
    delete temp;
}

void deleteAtPosi(Node*& head, Node*& tail, int pos) {
    if (head == NULL) return;

    if (pos == 1) {
        deleteAtHead(head, tail);
        return;
    }

    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;

    while (cnt < pos) {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    if (curr == tail) {
        tail = prev;
    }

    prev->next = curr->next;
    delete curr;
}

void print(Node* head) {
    if (head == NULL) return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    insertAtLast(head, tail, 30);

    print(head);

    deleteAtHead(head, tail);
    deleteAtPosi(head, tail, 2);

    print(head);
}
