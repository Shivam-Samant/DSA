#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

// Encapsulation is a mechanism of wrapping data and methods together
// NOTE: when all data members are private then we call it as perfect encapsulation

class Encapsulation {
    // default members and methods are private
    int x, y;
    public:
    int getX() {
        return this->x;
    }
    void setX(int x) {
        this->x = x;
    }
};

int main() {
    Encapsulation e;
    cout << e.getX() << endl;
    e.setX(10);
    cout << e.getX() << endl;
    return 0;
}