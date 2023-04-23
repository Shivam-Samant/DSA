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

void print(Node *ptr) {
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

void removeDuplicates(Node *&head) {
    if (head == NULL) {
        cout << "LL is empty" << endl;
        return;
    }

    if (head->next == NULL) {
        cout << "LL has only one node" << endl;
        return;
    }

    Node *curr = head;

    while (curr->next != NULL) {
        if (curr->data == curr->next->data) {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            temp->next = NULL;
            delete temp;
        } else {
            curr = curr->next;
        }
    }
}

int main() {
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(20);
    Node *fourth = new Node(30);
    Node *fifth = new Node(30);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    print(first);

    removeDuplicates(first);

    print(first);
    return 0;
}