#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

class Animal {
    int x, y;
    public:
    Animal() {
        cout << "Constructor called..." << endl;
    }
    Animal(int x, int y) {
        cout << "parameterized constructor called..." << endl;
        this->x = x;
        this->y = y;
    }
    ~Animal() {
        cout << "Destructor called..." << endl;
    }
};

int main() {
    Animal a(2,3);
    Animal *b = new Animal();
    delete b;
    return 0;
}