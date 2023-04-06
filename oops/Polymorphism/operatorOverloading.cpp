#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

// Operator overloading functions for +, -, *, /, %, ++, --, <<, >>, &, |, ^, ~, !, =, ==, !=, <, >, <=, >=, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=, [], ->, () and new and delete operators are not allowed to be overloaded.

class Param {
    public:
    int val;

    void operator+(Param &obj2) {
        int val1 = this->val;
        int val2 = obj2.val;
        cout << val2-val1 << endl; 
    }
};

int main() {
    Param obj1, obj2;
    obj1.val = 5;
    obj2.val = 10;

    obj1+obj2;
    return 0;
}