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
    int num = 99;
    cout << (num ? 1 + (num-1) % 9 : 0) << endl;
    return 0;
}