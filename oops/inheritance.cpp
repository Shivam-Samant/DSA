#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

class Base {
    int x, y;
    public:
    int getX() {
        return x;
    }
    void setX(int x) { 
        this->x = x;
    }
};

class Derived : public Base {
    int z;
    public:
    int getZ() { 
        return z; 
    }
    void setZ(int z) { 
        this->z = z;
    }
};

int main() {
    Derived d;
    d.setX(10);
    cout << d.getX() << endl;
    d.setZ(20);
    cout << d.getZ() << endl;
    return 0;
}