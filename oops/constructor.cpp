#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

// Parameterized constructor
class Animal {
    public:
    int x;
    int y;
    Animal() {
        cout << "Constructor called..." << endl;
    }
    // Parameterized constructor
    Animal(int x, int y) {
        cout << "Parameterized constructor called..." << endl;
        this->x = x;
        this->y = y;
    }

    // copy constructor
    Animal(Animal& a) {
        cout << "copy constructor called..." << endl;
        this->x = a.x;
        this->y = a.y;
    }
};

int main() {
    // constructor called
    Animal *a = new Animal();
    // parameterized constructor called
    Animal *animal = new Animal(2,3);
    cout << animal->x << " " << animal->y << endl;
    // copy constructor called
    Animal c = *a;
    // or
    Animal animalOne(c);
    return 0;
}