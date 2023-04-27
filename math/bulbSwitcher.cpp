// 319. Bulb Switcher
// There are n bulbs that are initially off. You first turn on all the bulbs, then you turn off every second bulb.
// On the third round, you toggle every third bulb (turning on if it's off or turning off if it's on). For the ith round, you toggle every i bulb. For the nth round, you only toggle the last bulb.
// Return the number of bulbs that are on after n rounds.

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
    int n = 3;
    int ans = sqrt(n);
    cout << ans << endl;
    return 0;
}