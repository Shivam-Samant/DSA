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

    int sum (int x, float y) {
        return x + y;
    }
};

int main() {
    Adder a;
    cout << a.sum(2,3) << endl;
    cout << a.sum(2,3,4) << endl;
    // cout << a.sum(2, 3.5) << endl; // if we write 3.5 so the compiler understand it as double precision floating point number and it will give error
    // to resolve the above error we use "f" to indicate that its a floting point number
    cout << a.sum(2, 3.5f) << endl;
    return 0;
}