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

void insertAtTail(Node* &tail, int data) {
    Node* newNode = new Node(data);
    if (tail == NULL) {
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
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

void deleteAtTail(Node* &head, Node* &tail) {
    if (head == NULL) {
        return;
    } else if (head == tail) {
        delete head;
        head = NULL;
        tail = NULL;
    } else {
        Node *temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }
}

void deleteAtPosition(Node *head, Node *tail, int position) {
    if (position == 0) {
        deleteAtHead(head, tail);
    } else if (position == 1) {
        deleteAtTail(head, tail);
    } else {
        Node *prev = head;
        Node *curr = head;
        for (int i = 1; i < position - 1; i++) {
            prev = prev->next;
            curr = prev->next->next;
        }
        delete prev->next;
        prev->next = curr;
    }
}

void print(Node *ptr) {
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    Node *head = new Node;
    Node *tail = new Node(10);
    head = tail;
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    insertAtTail(tail, 50);
    insertAtTail(tail, 60);

    print(head);
    deleteAtPosition(head, tail, 4);
    print(head);
    return 0;
}