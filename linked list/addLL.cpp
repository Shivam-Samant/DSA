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

void print(Node* &head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverseLL(Node *head) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    while (curr != NULL) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}

void addLL(Node *first, Node *second, Node *&answer) {
    if (first == NULL || second == NULL) {
        return;
    }
    answer = new Node(-1);

    Node *revFirst = reverseLL(first);
    Node *revSecond = reverseLL(second);

    Node *temp = answer;
    int carry = 0;

    while (revFirst != NULL && revSecond != NULL) {
        // adding both nodes
        int result = revFirst->data + revSecond->data;

        // taking the ans part from the result and adding the carry
        int ans = (result % 10) + carry;

        // create a new node of ans
        Node *res = new Node(ans);

        // add the result node into the temp Linked list
        temp->next = res;
        temp = res;

        // generate carry
        if (result >= 10) {
            carry = result / 10;
        }

        // increment
        revFirst = revFirst->next;
        revSecond = revSecond->next;
    }

    while (revFirst != NULL) {
        int result = revFirst->data + carry;
        carry = 0;
        Node *ans = new Node(result);
        temp->next = ans;
        temp = ans;
        revFirst = revFirst->next;
    }

    while (revSecond != NULL) {
        int result = revSecond->data + carry;
        carry = 0;
        Node *ans = new Node(result);
        temp->next = ans;
        temp = ans;
        revSecond = revSecond->next;
    }

    // delete dummy node
    Node *dummy = answer;
    answer = answer->next;
    dummy->next = NULL;
    delete dummy;

    answer = reverseLL(answer);
}

int main() {
    Node *head1 = new Node(2);
    Node *second1 = new Node(9);
    head1->next = second1;

    Node *head2 = new Node(2);
    Node *second2 = new Node(9);
    Node *third2 = new Node(5);
    head2->next = second2;
    second2->next = third2;

    print(head1);
    print(head2);

    Node *ans;
    addLL(head1, head2, ans);
    print(ans);
    return 0;
}