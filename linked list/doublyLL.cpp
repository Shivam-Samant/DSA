#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int data) {
    if (head == NULL) {
        head = new Node(data);
        tail = head;
        return;
    }
    Node *newNode = new Node(data);
    newNode->prev = NULL;
    newNode->next = head;
    if (head!= NULL) {
        head->prev = newNode;
    }
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data) {
    if (head == NULL) {
        head = new Node(data);
        tail = head;
        return;
    }

    Node *newNode = new Node(data);
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void print(Node *head) {
    Node *temp = head;
    while (temp!= NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reversePrint(Node *tail) {
    Node *temp = tail;
    while (temp!= NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data) {
    if (head == NULL) {
        head = new Node(data);
        tail = head;
        return;
    }
    Node *temp = head;
    Node *prev = head;
    for (int i = 1; i < position; i++) {
        prev = temp;
        temp = temp->next;
    }
    Node *newNode = new Node(data);
    prev->next = newNode;
    newNode->prev = temp->prev;
    newNode->next =temp;
    temp->prev = newNode;
}

void deleteAtHead(Node *&head, Node *&tail) {
    if (head==NULL) {
        return;
    }

    if (head == tail) {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }

    Node *temp = head;
    Node *nextNode = temp->next;
    nextNode->prev = NULL;
    head = nextNode;
    delete temp;
}

void deleteAtTail(Node *&head, Node *&tail) {
    if (head==NULL) {
        return;
    }

    if (head == tail) {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }

    Node *temp = tail;
    tail = tail->prev;
    tail->prev = NULL;
    temp->prev = NULL;
    delete temp;
}

void deleteAtPosition(Node *&head, Node *&tail, int position) {
    cout << "head: " << head->data << "  tail: " << tail->data << " position: " << position << endl;
    if (head == NULL) {
        return;
    }
    if (head == tail) {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    cout << "head: " << head->data << endl;
    Node *temp = head;
    for (int i = 1; i < position; i++) {
        temp = temp->next;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    cout << temp->data << " " << head->data << endl;
    delete temp;
}

int main() {
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);
    Node *head = node1;
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;
    Node *tail = node4;

    print(head);
    insertAtHead(head, tail, 5);
    print(head);
    insertAtTail(head, tail, 50);
    print(head);
    insertAtPosition(head, tail, 2, 100);
    print(head);

    cout << "Reverse order: " << endl;
    reversePrint(tail);

    deleteAtHead(head, tail);
    // print(head);
    // deleteAtTail(head, tail);
    // print(head);
    // deleteAtPosition(head, tail, 2);
    // print(head);

    return 0;
}