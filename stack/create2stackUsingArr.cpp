#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

class Stack {
    int size;
    int *arr;
    int topIdx1;
    int topIdx2;

    public:
    Stack(int size) {
        this->size = size;
        this->arr = new int[size];
        this->topIdx1 = -1;
        this->topIdx2 = size;
    }

    void push1(int val) {
        if (topIdx1+1 == topIdx2) {
            cout << "Stack overflow" << endl;
        } else {
            arr[++topIdx1] = val;
        }
    }

    void push2(int val) {
        if (topIdx2-1 == topIdx1) {
            cout << "Stack overflow" << endl;
        } else {
            arr[--topIdx2] = val;
        }
    }

    void pop1() {
        if (topIdx1 < 0) {
            cout << "Stack underflow" << endl;
        } else {
            topIdx1--;
        }
    }

    void pop2() {
        if (topIdx2 >= size) {
            cout << "Stack underflow" << endl;
        } else {
            topIdx2++;
        }
    }

    int getTop1() {
        if (topIdx1 < 0) {
            cout << "Stack underflow" << endl;
            return -1;
        }
        return arr[topIdx1];
    }

    int getTop2() {
        if (topIdx2 == size) {
            cout << "Stack underflow" << endl;
            return -1;
        }
        return arr[topIdx2];
    }
};

int main() {
    Stack s(5);
    s.pop1();
    s.pop2();

    s.push1(10);
    s.push1(20);
    s.push1(30);

    s.push2(40);
    s.push2(50);
    s.push2(60);
    
    cout << s.getTop1() << endl;
    cout << s.getTop2() << endl;

    return 0;
}