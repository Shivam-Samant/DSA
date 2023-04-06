#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

class A {
    public:
    int physicsMarks;
};

class B {
    public:
    int chemistryMarks;
};

class C : public A, public B {
    public:
    int mathMarks;
};

int main() {
    C c;
    c.mathMarks = 100;
    c.physicsMarks = 90;
    c.chemistryMarks = 80;
    cout << c.mathMarks << " " << c.physicsMarks << " " << c.chemistryMarks << endl;
    return 0;
}