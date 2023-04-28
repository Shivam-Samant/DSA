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

int findMiddleValue(stack<int> st) {
    int ans = -1;
    int size = st.size();
    while (!st.empty()) {
        if (st.size() == size/2) break;
        int val = st.top();
        ans = val;
        st.pop();
    }
    return ans;
}

int findMiddleValueUsingRecursion(stack<int> st, int n) {
    if (st.size() == (n/2)+1) {
        return st.top();
    }
    int temp = st.top();
    st.pop();
    int ans = findMiddleValueUsingRecursion(st, n);
    st.push(temp);
    return ans;
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

    // int ans = findMiddleValue(st);

    int size = st.size();
    int ans = findMiddleValueUsingRecursion(st, size);
    
    cout << "Middle value of the stack is " << ans << endl;
    
    printStack(st);

    return 0;
}