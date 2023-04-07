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
    virtual void speak() {
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
    Animal *a = new Dog;
    a->speak();
    return 0;
}