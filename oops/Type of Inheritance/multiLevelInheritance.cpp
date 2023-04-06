#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

class Fruit {
    public:
    string name;
};

class Mango: public Fruit {
    public:
    int weight;
};

class Dusseri: public Mango {
    public:
    int sugarLevel;
};

int main() {
    Dusseri dusseri;
    dusseri.name = "Dusseri";
    dusseri.weight = 100;
    dusseri.sugarLevel = 80;
    cout << dusseri.name << " " << dusseri.weight << " " << dusseri.sugarLevel << endl;
    return 0;
}