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
    void speak() {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal {
    public:
    void speak() {
        cout << "Barking" << endl;
    }
};

int main() {
    // Dog *d = new Animal;
    // d->speak(); // error: cannot initialize a variable of type 'Dog *' with an rvalue of type 'Animal *'

    Dog *d = (Dog *) new Animal;
    d->speak();
    return 0;
}