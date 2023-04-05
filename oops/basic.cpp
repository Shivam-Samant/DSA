#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

// default class is private

// define empty class
class Animal {};

// define Dog class
class Dog {
    int eyes;
    int legs;
    char name;
};

// define Pen class
class Pen {
    int weight;
    public:
    string color;
    int price;

    void write() {
        cout << "writing..." << endl;
    }

// getter methods to get the weight
    int getWeight() {
        return weight;
    }

// setter methods to set the weight
    void setWeight(int weight) {
        this->weight = weight;
    }

};

int main() {
    cout << "The size of the animal class is " << sizeof(Animal) << endl;
    cout << "The size of the dog class is " << sizeof(Dog) << endl; // ans 12: because of padding and greedy alignment

    Pen pen;
    cout << "The size of the pen class is " << sizeof(Pen) << endl;
    cout << "Color of the pen is " << pen.color << endl;
    cout << "Price of the pen is " << pen.price << endl;
    pen.write();
    // cout << "Weight of the pen is " << pen.weight << endl; // getting error because its private property
    pen.setWeight(10);
    cout << "The weight of the pen is " << pen.getWeight() << endl;

    // creating pen object using dynamic memory
    Pen *pen2 = new Pen();
    pen2->color = "blue";
    cout << "The color of the pen2 is " << (*pen2).color << endl;
    cout << "The color of the pen2 is " << pen2->color << endl;

    return 0;
}