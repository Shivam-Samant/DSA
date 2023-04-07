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
    public:
    Animal() {
        cout << "Animal constructor" << endl;
    }
    void speak() {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal {
    public:
    Dog() {
        cout << "Dog constructor" << endl;
    }
    void speak() {
        cout << "Barking" << endl;
    }
};

int main() {
    // Animal *a = new Dog; // Animal and dog constructor called here(because of the inheritance)
    // Animal *b = new Animal; // Animal constructor called here
    // Dog *c = new Dog; // Animal and dog constructor called here(because of the inheritance)
    Dog *d = (Dog *) new Animal; // Animal constructor called here
    return 0;
}