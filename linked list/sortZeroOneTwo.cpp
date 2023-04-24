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

// Node *sortZeroOneTwo(Node *&head) {
//     Node *zero = new Node(0);
//     Node *one = new Node(0);
//     Node *two = new Node(0);

//     Node *zeroHead = zero;
//     Node *oneHead = one;
//     Node *twoHead = two;

//     Node *curr = head;

//     while (curr != NULL) {
//         Node *temp = curr;
//         if (curr->data == 0) {
//             temp->next = NULL;
//             zero->next = temp;
//             zero = temp;
//         } else if (curr->data == 1) {
//             temp->next = NULL;
//             one->next = temp;
//             one = temp;
//         } else {
//             temp->next = NULL;
//             two->next = temp;
//             two = temp;
//         }
//         curr = curr->next;
//     }

//     zero->next = (oneHead->next) ? oneHead->next : twoHead->next;
//     one->next = twoHead->next;
//     zeroHead = zeroHead->next;
//     oneHead = oneHead->next;
//     head = zeroHead;

//     zeroHead->next = NULL;
//     delete zeroHead;

//     oneHead->next = NULL;
//     delete oneHead;

//     twoHead->next = NULL;
//     delete twoHead;

//     return head;
// }

Node* sortZeroOneTwo(Node* &head) {
    if(head == NULL) {
        cout << "LL is empty " << endl;
        return NULL;
    }
    if(head -> next == NULL) {
        //sngle node in LL
        return head;
    }

    //create dummy nodes
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    //traverse the original LL
    Node* curr = head;
    while(curr != NULL) {

        if(curr -> data == 0) {
            //take out the zero wali node
            Node* temp = curr;
            curr = curr -> next;
            temp -> next = NULL;

            //append the zero node in zeroHead LL
            zeroTail -> next = temp;
            zeroTail = temp;

        }
        else if(curr -> data == 1) {
            //take out the one wali node
            Node* temp = curr;
            curr = curr -> next;
            temp -> next = NULL;

            //append the zero node in zeroHead LL
            oneTail -> next = temp;
            oneTail = temp;

        }
        else if(curr -> data == 2) {
            //take out the zero wali node
            Node* temp = curr;
            curr = curr -> next;
            temp -> next = NULL;

            //append the zero node in zeroHead LL
            twoTail -> next = temp;
            twoTail = temp;

        }
    }

    //ab yha pr, zero , one, two, teeno LL readyv h

    // join them
    //remove dummmy nodes

    //modify one wali list
    Node* temp = oneHead;
    oneHead = oneHead -> next;
    temp -> next = NULL;
    delete temp;

    //modify two wali list
    temp = twoHead;
    twoHead = twoHead -> next;
    temp -> next = NULL;
    delete temp;

    //join list
    if(oneHead != NULL) {
        // one wali list is non empty
        //zero wali list ko one wali list se attach krdia
        zeroTail -> next = oneHead;

        if(twoHead != NULL)
            oneTail -> next = twoHead;
    }
    else{
        //one wali list is empty
        if(twoHead != NULL)
            zeroTail -> next = twoHead;
    }

    //remove zerohead dummy Node
    temp = zeroHead;
    zeroHead = zeroHead -> next;
    temp -> next = NULL;
    delete temp;

    //return head of the modified linked list
    return zeroHead;

}


int main() {
    Node *first = new Node(0);
    Node *second = new Node(2);
    Node *third = new Node(2);
    Node *fourth = new Node(1);
    Node *fifth = new Node(1);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    print(first);

    first = sortZeroOneTwo(first);

    print(first);
    return 0;
}