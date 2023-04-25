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

    Node *revFirst = reverseLL(first);
    Node *revSecond = reverseLL(second);

    Node *temp = answer;
    int carry = 0;

    while (revFirst != NULL && revSecond != NULL) {
        int sum = revFirst->data + revSecond->data + carry;
        int digit = (sum % 10);
        carry = sum / 10;

        Node *res = new Node(digit);

        // if answer/temp LL is null
        if (temp == NULL) {
            temp = res;
            answer = temp;
        } else {
            temp->next = res;
            temp = res;
        }

        // increment
        revFirst = revFirst->next;
        revSecond = revSecond->next;
    }

    // if first LL length is greater than second LL
    while (revFirst != NULL) {
        int sum = revFirst->data + carry;
        int digit = sum % 10;
        carry = sum / 10;
        Node *ans = new Node(digit);
        temp->next = ans;
        temp = ans;
        revFirst = revFirst->next;
    }

    // if second LL length is greater than first LL
    while (revSecond != NULL) {
        int sum = revSecond->data + carry;
        int digit = sum % 10;
        carry = sum / 10;
        Node *ans = new Node(digit);
        temp->next = ans;
        temp = ans;
        revSecond = revSecond->next;
    }

    // if carry is remaining
    while (carry) {
        int digit = carry % 10;
        carry /= 10;
        Node *ans = new Node(digit);
        temp->next = ans;
        temp = ans;
    }

    answer = reverseLL(answer);
}

int main() {
    Node *head1 = new Node(15);
    Node *second1 = new Node(5);
    Node *third1 = new Node(10);
    Node *fourth1 = new Node(7);
    head1->next = second1;
    second1->next = third1;
    third1->next = fourth1;

    Node *head2 = new Node(9);
    Node *second2 = new Node(20);
    Node *third2 = new Node(60);
    head2->next = second2;
    second2->next = third2;

    print(head1);
    print(head2);

    Node *ans;
    addLL(head1, head2, ans);
    print(ans);
    return 0;
}