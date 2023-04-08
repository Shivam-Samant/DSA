#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

// Abstraction: Implementation hiding
// Note: Encapsulation is a subset of the Abstraction
// Note: We can achieve abstraction using access modifiers

class Abstraction {
    public:
    void speak() {
        cout << "Speak!" << endl;
    }
};

int main() {
    Abstraction ab;
    ab.speak();
    return 0;
}