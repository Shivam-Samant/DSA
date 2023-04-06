#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

// Polymorphism is the ability of an object to take on many forms.

class Adder {
    public:
    int sum(int x, int y) {
        return x + y;
    }

    int sum (int x, int y, int z) {
        return x + y + z;
    }
};

int main() {
    Adder a;
    cout << a.sum(2,3) << endl;
    cout << a.sum(2,3,4) << endl;
    return 0;
}