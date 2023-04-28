#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Stack {
    int *stack;
    int size;
    int topIdx; // points to the top element of the stack

    public:
    Stack(int size) {
        this->stack = new int[size];
        this->size = size;
        this->topIdx = -1;
    }

    void pop() { 
        if (this->isEmpty()) {
            cout << "Stack underflow" << endl;
        } else {
            topIdx--;
        }
    }

    void push(int v) {
        if (topIdx >= size) {
            cout << "Stack overflow" << endl;
        }
        stack[++topIdx] = v;
    }

    int top() {
        if (this->isEmpty()) {
            cout << "Stack underflow" << endl;
            return -1;
        }
        return stack[topIdx];
    }

    int getSize() {
        return topIdx+1;
    }

    bool isEmpty() {
        return topIdx < 0;
    }
};

int main() {
    Stack st(1000);
    st.pop();
    cout << "Top element: " << st.top() << endl;
    st.push(10);
    cout << "Top element : " << st.top() << endl;
    st.push(20);
    cout << "Top element : " << st.top() << endl;
    st.push(30);
    cout << "Top element : " << st.top() << endl;
    st.push(40);
    cout << "Top element : " << st.top() << endl;
    st.push(50);
    cout << "Top element : " << st.top() << endl;

    st.pop();
    cout << "Top element : " << st.top() << endl;

    cout << "Size of the stack : " << st.getSize() << endl;

    if (st.isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }


    while(!st.isEmpty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}