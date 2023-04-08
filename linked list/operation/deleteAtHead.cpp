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

void print(Node *ptr) {
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

void deleteAtHead(Node* &head, Node* &tail) {
    if (head == NULL) {
        return;
    } else if (head == tail) {
        delete head;
        head = NULL;
        tail = NULL;
    } else {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
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
    deleteAtHead(head, tail);
    print(head);
    return 0;
}