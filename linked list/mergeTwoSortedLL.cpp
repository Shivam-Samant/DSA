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

Node* merge(Node *&head1, Node *&head2) {
    if (head1 == NULL) {
        return head2;
    }
    if (head2 == NULL) {
        return head1;
    }

    Node *temp1 = head1;
    Node *temp2 = head2;

    Node *ans = NULL;
    Node *ansTail = ans;

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->data <= temp2->data) {
            if (ansTail == NULL) {
                ansTail = temp1;
                ans = temp1;
            } else {
                ansTail->next = temp1;
                ansTail = temp1;
            }
            temp1 = temp1->next;
        } else {
            if (ansTail == NULL) {
                ansTail = temp2;
                ans = temp1;
            } else {
                ansTail->next = temp2;
                ansTail = temp2;
            }
            temp2 = temp2->next;
        }
    }

    while (temp1 != NULL) {
        Node *temp = temp1;
        ansTail->next = temp1;
        ansTail = temp1;
        temp1 = temp1->next;
    }

    while (temp2 != NULL) {
        Node *temp = temp2;
        ansTail->next = temp2;
        ansTail = temp2;
        temp2 = temp2->next;
    }


    return ans;
}

int main() {
    Node *head1 = new Node(1);
    Node *second1 = new Node(2);
    Node *third1 = new Node(5);
    Node *fourth1 = new Node(7);
    Node *fifth1 = new Node(10);

    head1->next = second1;
    second1->next = third1;
    third1->next = fourth1;
    fourth1->next = fifth1;

    Node *head2 = new Node(1);
    Node *second2 = new Node(4);
    Node *third2 = new Node(6);
    Node *fourth2 = new Node(8);
    Node *fifth2 = new Node(9);

    head2->next = second2;
    second2->next = third2;
    third2->next = fourth2;
    fourth2->next = fifth2;

    print(head1);
    print(head2);

    Node *ans = merge(head1, head2);

    print(ans);

    return 0;
}