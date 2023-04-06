#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

class Car {
    public:
    string name;
};

class Scorpio: public Car {};
class Kwid: public Car {};

int main() {
    Scorpio s;
    Kwid k;
    s.name = "Scorpio";
    cout << s.name << endl;
    k.name = "Kwid";
    cout << k.name << endl;
    return 0;
}