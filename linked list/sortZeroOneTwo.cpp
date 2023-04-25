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

Node *sortZeroOneTwo(Node *&head) {
    Node *zero = new Node(0);
    Node *one = new Node(0);
    Node *two = new Node(0);

    Node *zeroHead = zero;
    Node *oneHead = one;
    Node *twoHead = two;

    Node *curr = head;

    while (curr != NULL) {
        Node *temp = curr;
        if (curr->data == 0) {
            zero->next = temp;
            zero = temp;
        } else if (curr->data == 1) {
            one->next = temp;
            one = temp;
        } else {
            two->next = temp;
            two = temp;
        }
        curr = curr->next;
        temp->next = NULL;
    }

    // join the zero one and two LL
    if (zeroHead->next != NULL) {
        if (oneHead->next != NULL) {
            zero->next = oneHead->next;
        } else if (twoHead->next != NULL) {
            zero->next = twoHead->next;
        }
        head = zeroHead->next;
    }
    if (oneHead->next != NULL) {
        if (zeroHead->next == NULL) {
            head = oneHead->next;
        }
        if (twoHead->next != NULL) {
            one->next = twoHead->next;
        }
    }
    if (zeroHead->next == NULL && oneHead->next == NULL && twoHead->next != NULL) {
        head = twoHead->next;
    }

    // Delete dummy nodes of zero, one and two LL
    zeroHead->next = NULL;
    delete zeroHead;

    oneHead->next = NULL;
    delete oneHead;

    twoHead->next = NULL;
    delete twoHead;

    return head;
}

int main() {
    Node *first = new Node(2);
    Node *second = new Node(1);
    Node *third = new Node(2);
    Node *fourth = new Node(0);
    Node *fifth = new Node(0);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    print(first);

    first = sortZeroOneTwo(first);

    print(first);
    return 0;
}