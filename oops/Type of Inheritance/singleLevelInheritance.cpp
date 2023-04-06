#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

// Single level inheritance
class Car {
    public:
        string name;
        int maxSpeed;

        void printName() {
            cout << this->name << endl;
        }      
};

class Scorpio: public Car {};

int main() {
    Scorpio s;
    s.name = "Mahindra Scorpio";
    s.maxSpeed = 1000;
    s.printName();
    return 0;
}