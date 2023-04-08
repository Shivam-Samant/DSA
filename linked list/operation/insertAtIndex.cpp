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
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* tail, int data) {
    Node* newNode = new Node(data);
    if (tail == NULL) {
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

int findLength(Node* &head) {
    Node *temp = head;
    int count = 1;
    while(temp->next != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}

void insertAtPosition(Node* &head, Node *tail, int index, int data) {
    if (index == 0) {
        insertAtHead(head, data);
        return;
    }
    if (index == findLength(head)) {
        insertAtTail(tail, data);
        return;
    }
    int i = 1;
    Node* temp = head;
    while (i < index) {
        temp = temp->next;
        i++;
    }
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

void print(Node *ptr) {
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    Node *head = new Node(10);
    Node *tail = head;
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);
    insertAtHead(head, 60);

    print(head);
    insertAtPosition(head, tail, 3, 100);
    print(head);
    insertAtPosition(head, tail, 1, 200);
    print(head);
    insertAtPosition(head, tail, 0, 500);
    print(head);
    insertAtPosition(head, tail, 9, 900);
    print(head);

    return 0;
}