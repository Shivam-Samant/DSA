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

Node *findMiddle(Node *head) {
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

void reverseLL(Node *&mid) {
    Node *prev = NULL;
    Node *curr = mid;
    Node *next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    mid = prev;
}


bool isPalindrome(Node *head) {
    Node *temp = head;
    Node *mid = findMiddle(temp);
    reverseLL(mid);

    while(mid != NULL) {
        if (temp->data == mid->data) {
            temp = temp->next;
            mid = mid->next;
        } else {
            return false;
        }
    }

    return true;
}

int main() {
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(20);
    Node *fifth = new Node(10);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    print(first);

    cout << isPalindrome(first) << endl;
    return 0;
}