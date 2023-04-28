#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

int main() {
    string name = "Shivam";
    cout << "Name: " << name << endl;
    stack<char> buffer;
    for (int i = 0; i < name.size(); i++) {
        buffer.push(name[i]);
    }
    int i = 0;
    while (!buffer.empty()) {
        name[i++] = buffer.top();
        buffer.pop();
    }
    cout << "Reverse name: " << name << endl;
    return 0;
}