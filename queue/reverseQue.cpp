#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

void revQueue(queue<int> &q) {
    if (q.empty()) return;
    int num = q.front();
    q.pop();
    revQueue(q);
    q.push(num);
}

void printQueue(queue<int> q) {
    if (q.empty()) return;
    cout << q.front() << " ";
    q.pop();
    printQueue(q);
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "queue ";
    printQueue(q);
    revQueue(q);
    cout << "\nrev queue ";
    printQueue(q);

    return 0;
}