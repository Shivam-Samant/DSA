#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    printStack(st);

    int size = st.size();
    int ans = -1;
    while (!st.empty()) {
        if (st.size() == size/2) break;
        int val = st.top();
        ans = val;
        st.pop();
    }

    cout << "Middle value of the stack is " << ans << endl;

    return 0;
}