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
    Dog dog;
    dog.speak();
    return 0;
}