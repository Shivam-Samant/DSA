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
    deleteAtTail(head, tail);
    print(head);
    return 0;
}