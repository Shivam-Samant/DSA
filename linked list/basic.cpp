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
};

int main() {
    Node node1;
    node1.data = 1;
    node1.next = NULL;
    Node node2;
    node2.data = 2;
    node1.next = &node2;
    node2.next = NULL;

    Node* head = &node1;
    while(head != NULL) {
        cout << head->data << endl;
        head = head->next;
    }
    return 0;
}